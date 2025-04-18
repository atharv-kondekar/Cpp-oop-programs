#include <stdio.h>
#include <stdlib.h>

// Structure to represent a task with start time, end time, and profit
typedef struct 
{
    int start, end, profit;
} Task;

// Comparator function to sort tasks by their end times
int compare(const void *a, const void *b) 
{
    return ((Task *)a)->end - ((Task *)b)->end;
}

// Function to find the latest non-overlapping task
int findLastNonConflicting(Task tasks[], int index) 
{
    for (int j = index - 1; j >= 0; j--) 
	{
        if (tasks[j].end <= tasks[index].start)
            return j;
    }
    return -1;
}

// Function to find the maximum profit using Dynamic Programming
int maxProfit(Task tasks[], int n) 
{
    qsort(tasks, n, sizeof(Task), compare);
    
    int dp[n];
    dp[0] = tasks[0].profit;
    
    for (int i = 1; i < n; i++) 
	{
        int inclProfit = tasks[i].profit;
        int l = findLastNonConflicting(tasks, i);
        if (l != -1)
            inclProfit += dp[l];
        
        dp[i] = (inclProfit > dp[i - 1]) ? inclProfit : dp[i - 1];
    }
    
    return dp[n - 1];
}

int main() 
{
    Task tasks[] = {{1, 3, 50}, {2, 5, 20}, {4, 6, 70}, {6, 7, 30}, {5, 8, 50}, {7, 9, 60}};
    int n = sizeof(tasks) / sizeof(tasks[0]);
    
    printf("Maximum possible profit: %d\n", maxProfit(tasks, n));
    return 0;
}

