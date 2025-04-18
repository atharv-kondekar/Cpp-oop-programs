#include <stdio.h>
#include <stdlib.h>

// Structure to represent an interval
typedef struct 
{
    int start, end;
} Interval;

// Comparator function to sort intervals by their ending times
int compare(const void *a, const void *b) 
{
    return ((Interval *)a)->end - ((Interval *)b)->end;
}

// Function to find the maximum number of non-overlapping intervals
void intervalScheduling(Interval intervals[], int n) 
{
    qsort(intervals, n, sizeof(Interval), compare);

    printf("Selected intervals:\n");
    int count = 1;
    int lastEnd = intervals[0].end;
    printf("[%d, %d]\n", intervals[0].start, intervals[0].end);
    
    for (int i = 1; i < n; i++) 
	{
        if (intervals[i].start >= lastEnd) 
		{
            printf("[%d, %d]\n", intervals[i].start, intervals[i].end);
            lastEnd = intervals[i].end;
            count++;
        }
    }
    
    printf("Maximum number of non-overlapping intervals: %d\n", count);
}

int main() 
{
    Interval intervals[] = {{1, 3}, {2, 5}, {3, 9}, {6, 8}, {8, 10}, {9, 11}};
    int n = sizeof(intervals) / sizeof(intervals[0]);
    
    intervalScheduling(intervals, n);
    return 0;
}

