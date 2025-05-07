#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int longestPalindromicSubsequence(char s[]) {
    int n = strlen(s);
    int dp[n][n];

    for (int i = 0; i < n; i++)
        dp[i][i] = 1;

    for (int cl = 2; cl <= n; cl++) {
        for (int i = 0; i < n - cl + 1; i++) {
            int j = i + cl - 1;
            if (s[i] == s[j] && cl == 2)
                dp[i][j] = 2;
            else if (s[i] == s[j])
                dp[i][j] = dp[i + 1][j - 1] + 2;
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        }
    }

    return dp[0][n - 1];
}

int main() {
    char str[] = "BBABCBCAB";
    int length = longestPalindromicSubsequence(str);
    printf("Length of the longest palindromic subsequence: %d\n", length);
    return 0;
}

