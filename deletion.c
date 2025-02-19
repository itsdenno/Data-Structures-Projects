#include <stdio.h>
void deleteArray(int arr[], int *size, int pos) {
    if (pos < 0 || pos >= *size) {
        printf("Invalid position\n");
        return;
    }
    for (int i = pos; i < (*size) - 1; i++) arr[i] = arr[i + 1];
    (*size)--;
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; 
    int size = 5;
    deleteArray(arr, &size, 2);  

    displayArray(arr, size);

    return 0;
}
