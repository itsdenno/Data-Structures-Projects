#include <stdio.h>

void insertArray(int arr[], int *size, int element, int pos) {
    for (int i = (*size)++; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = element;
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[10] = {1, 2, 4, 5}; 
    int size = 4;

    insertArray(arr, &size, 3, 2);  

    displayArray(arr, size);

    return 0;
}
