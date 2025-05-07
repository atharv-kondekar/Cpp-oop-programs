#include <stdio.h>
#include <stdbool.h>

bool isSubsetSum(int arr[], int n, int target) {
    bool dp[n + 1][target + 1];

    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int j = 1; j <= target; j++)
        dp[0][j] = false;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= target; j++) {
            if (arr[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
        }
    }

    return dp[n][target];
}

int main() {
    int arr[] = {3, 34, 4, 12, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    if (isSubsetSum(arr, n, target))
        printf("There exists a subset with sum %d.\n", target);
    else
        printf("No subset with sum %d exists.\n", target);

    return 0;
}

