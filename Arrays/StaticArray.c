#include <stdio.h>

const int ARRAYSIZE = 5;

// Function prototypes
void printStaticArray(int arr[], int size);
void insertElement(int arr[], int* size, int index, int element);
void deleteElement(int arr[], int* size, int index);

int main() {

    // Static array declaration and initialization
    int staticArray[ARRAYSIZE] = { 10, 20, 30, 40, 50 };
    int staticSize = sizeof(staticArray) / sizeof(staticArray[0]);

    // Print static array elements
    printf("Initial static array:\n");
    printStaticArray(staticArray, staticSize);

    // Insert element
    insertElement(staticArray, &staticSize, 2, 25);
    printf("After inserting 25 at index 2:\n");
    printStaticArray(staticArray, staticSize);

    // Delete element
    deleteElement(staticArray, &staticSize, 3);
    printf("After deleting element at index 3:\n");
    printStaticArray(staticArray, staticSize);

	return 0;
}

void printStaticArray(int arr[], int size) {
    printf("Static Array Elements:\n");
    for (int i = 0; i < size; ++i) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int* size, int index, int element) {
    if (index < 0 || index > *size) {
        printf("Invalid index for insertion.\n");
        return;
    }
    // Shift elements to the right to make space for the new element
    for (int i = *size; i > index; --i) {
        arr[i] = arr[i - 1];
    }
    // Insert the new element
    arr[index] = element;
    *size += 1; // Update the size of the array
}

void deleteElement(int arr[], int* size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index for deletion.\n");
        return;
    }
    // Shift elements to the left to overwrite the deleted element
    for (int i = index; i < *size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    *size -= 1; // Update the size of the array
}
