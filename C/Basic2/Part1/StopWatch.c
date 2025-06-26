#include <stdio.h>
#include <windows.h>

void print_elapsed_time(LARGE_INTEGER start, LARGE_INTEGER end, LARGE_INTEGER freq){
    double elapsedTime = (double)(end.QuadPart - start.QuadPart) / freq.QuadPart;

    int hours = (int)(elapsedTime / 3600);
    int minutes = ((int)elapsedTime % 3600) / 60;
    int seconds = (int)elapsedTime % 60;
    int milliseconds = (int)((elapsedTime - (int)elapsedTime) * 1000);

    printf("Elapsed Time: %02d:%02d:%02d.%03d\n", hours, minutes, seconds, milliseconds);
}
int main() {
    LARGE_INTEGER frequency;
    LARGE_INTEGER start, end;

    QueryPerformanceFrequency(&frequency);

    printf("Press ENTER to start the stopwatch...");
    getchar(); 

    QueryPerformanceCounter(&start);
    printf("Stopwatch started. Press ENTER to stop...\n");

    getchar();
    QueryPerformanceCounter(&end);

    print_elapsed_time(start, end, frequency);

    return 0;
}