#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define ROWS 3
#define COLS 4

char grid[ROWS][COLS] = {
    {'A', 'B', 'C', 'E'},
    {'S', 'F', 'C', 'S'},
    {'A', 'D', 'E', 'E'}
};

bool search(char word[], int index, int x, int y, int visited[ROWS][COLS]) {
    if (word[index] == '\0') return true;
    if (x < 0 || y < 0 || x >= ROWS || y >= COLS) return false;
    if (visited[x][y] || grid[x][y] != word[index]) return false;

    visited[x][y] = 1;

    bool found = search(word, index + 1, x + 1, y, visited) ||
                 search(word, index + 1, x - 1, y, visited) ||
                 search(word, index + 1, x, y + 1, visited) ||
                 search(word, index + 1, x, y - 1, visited);

    visited[x][y] = 0;
    return found;
}

bool exist(char word[]) {
    int visited[ROWS][COLS] = {0};
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (search(word, 0, i, j, visited)) return true;
        }
    }
    return false;
}

int main() {
    char word[] = "ABCCED";
    if (exist(word))
        printf("The word '%s' exists in the grid.\n", word);
    else
        printf("The word '%s' does not exist in the grid.\n", word);
    return 0;
}

