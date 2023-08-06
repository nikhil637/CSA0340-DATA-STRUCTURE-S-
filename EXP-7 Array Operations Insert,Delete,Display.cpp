#include <stdio.h>
#define MAX_SIZE 10
int insertElement(int arr[], int size, int element, int position) {
    if (size >= MAX_SIZE) {
        printf("Array is full. Cannot insert.\n");
        return size;
    }

    if (position < 0 || position > size) {
        printf("Invalid position. Cannot insert.\n");
        return size;
    }

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    return size + 1;
}

int deleteElement(int arr[], int size, int position) {
    if (size <= 0 || position < 0 || position >= size) {
        printf("Invalid position. Cannot delete.\n");
        return size;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return size - 1;
}

void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;

    size = insertElement(arr, size, 10, 0);
    size = insertElement(arr, size, 20, 1);
    size = insertElement(arr, size, 30, 2);

    displayArray(arr, size);

    size = deleteElement(arr, size, 1);

    displayArray(arr, size);

    return 0;
}
