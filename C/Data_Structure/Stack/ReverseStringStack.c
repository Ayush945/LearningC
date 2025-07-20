#include <stdio.h>
#include <string.h>

char C[51];         
char stack[51];     
int top = -1;

void Push(char x) {
    if (top < 50)
        stack[++top] = x;
}

void Pop() {
    if (top >= 0)
        top--;
}

char Top() {
    if (top >= 0)
        return stack[top];
    return '\0';
}

// Takes N + N times or O(N) time complexity, Space complexity is O(N)
void Reverse(int n) {
    for (int i = 0; i < n; i++) {
        Push(C[i]);
    }
    for (int i = 0; i < n; i++) {
        C[i] = Top();
        Pop();
    }
}

int main() {
    printf("Enter a string: ");
    fgets(C, sizeof(C), stdin);
    Reverse(strlen(C));
    printf("Output = %s", C);
    return 0;
}
