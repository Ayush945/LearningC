#include <stdio.h>

void modifyArray(int* pArr, int size) {
    for (int i = 0; i < size; i++) {
        (*pArr)++;  // Cleaner way to increment
        printf("\nNew array element = %d", *pArr);
        pArr++;
    }
    printf("\n");
}

void reverseArray(int* pArr, int size) {
    pArr += size - 1;
    for (int i = size - 1; i >= 0; i--) {  // Fix loop condition
        printf("\nElement in array = %d", *pArr);
        pArr--;
    }
    printf("\n");
}

int sumOfArray(int* pArr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *pArr;  // Cleaner summation
        pArr++;
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* pArr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);

    modifyArray(pArr, size);

    pArr = arr;  // Reset pointer before reuse
    reverseArray(pArr, size);

    int (*func_ptr)(int*, int) = sumOfArray;  // Simplified function pointer assignment
    int sum = func_ptr(pArr, size);
    printf("\nThe sum of array = %d\n", sum);

    return 0;
}
