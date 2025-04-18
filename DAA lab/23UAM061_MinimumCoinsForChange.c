#include <stdio.h>

void findMinCoins(int coins[], int n, int amount) {
    int count[n]; // Array to store count of coins used
    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            count[i]++;
        }
    }

    printf("Minimum coins required: \n");
    for (int i = 0; i < n; i++) {
        if (count[i] > 0) {
            printf("%d coin(s) of %d\n", count[i], coins[i]);
        }
    }
}

int main() {
    int coins[] = {25, 10, 5, 1}; // Example denominations (U.S. cents)
    int n = sizeof(coins) / sizeof(coins[0]);
    int amount;
    
    printf("Enter the amount: ");
    scanf("%d", &amount);
    
    findMinCoins(coins, n, amount);
    
    return 0;
}