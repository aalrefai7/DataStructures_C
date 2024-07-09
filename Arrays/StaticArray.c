#include <stdio.h>

const int ARRAYSIZE = 5;

// Function prototypes
void printStaticArray(int arr[], int size);

int main() {

    // Static array declaration and initialization
    int staticArray[ARRAYSIZE] = { 10, 20, 30, 40, 50 };
    int staticSize = sizeof(staticArray) / sizeof(staticArray[0]);

    // Print static array elements
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