#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function to place pivot at correct position
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as pivot
    int i = low - 1,j;        // Index for smaller element

    for (j = low; j < high; j++) {
        if (arr[j] < pivot) { // If element is smaller than pivot
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]); // Move pivot to its correct position
    return i + 1; // Return pivot index
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partition index

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
	int i;
    for ( i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver Code
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Before Sorting: ");
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    printf("After Sorting: ");
    printArray(arr, size);

    return 0;
}

