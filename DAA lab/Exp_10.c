#include <stdio.h>

void generateSubsets(int arr[], int subset[], int n, int index, int subIndex) {
    if (index == n) {
        printf("[");
        for (int i = 0; i < subIndex; i++) {
            if (i > 0) printf(", ");
            printf("%d", subset[i]);
        }
        printf("]\n");
        return;
    }

    generateSubsets(arr, subset, n, index + 1, subIndex);
    subset[subIndex] = arr[index];
    generateSubsets(arr, subset, n, index + 1, subIndex + 1);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int subset[n];
    generateSubsets(arr, subset, n, 0, 0);
    return 0;
}

