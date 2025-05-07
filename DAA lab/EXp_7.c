#include <stdio.h>

void findMinimumCoins(int denominations[], int n, int amount) {
    int coinsUsed[100];
    int count = 0;

    // Sort denominations in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (denominations[i] < denominations[j]) {
                int temp = denominations[i];
                denominations[i] = denominations[j];
                denominations[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        while (amount >= denominations[i]) {
            amount -= denominations[i];
            coinsUsed[count] = denominations[i];
            count++;
        }
    }

    printf("Minimum coins required: %d\n", count);
    printf("Coins used: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", coinsUsed[i]);
    }
    printf("\n");
}

int main() {
    int denominations[] = {1, 5, 10, 25};
    int n = 4;
    int amount = 63;

    findMinimumCoins(denominations, n, amount);

    return 0;
}

