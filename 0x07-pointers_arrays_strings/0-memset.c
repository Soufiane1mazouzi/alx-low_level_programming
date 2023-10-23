#include "main.h"

int main(void) {
    int rows = 5;
    int cols = 10;

    char **arr = (char **)malloc(rows * sizeof(char *));

    for (int i = 0; i < rows; i++) {
        arr[i] = (char *)malloc(cols * sizeof(char));
    }

    // Fill the 2D array with some data
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = 'A' + (i % 26);
        }
    }

    // Use _putchar to print all the elements of the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            _putchar(arr[i][j]);
        }
        _putchar('\n');
    }

    // Free the allocated memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return (0);
}
