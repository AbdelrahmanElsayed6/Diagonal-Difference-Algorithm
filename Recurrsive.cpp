#include <iostream>
#include <cmath>

// Recurrsive :
int calculateRecursive(int matrix[][100], int n, int i) {
    if (i == n) return 0;

    int rowDiff = matrix[i][i] - matrix[i][n - 1 - i];
    return rowDiff + calculateRecursive(matrix, n, i + 1);
}

int diagonalDifferenceRecursive(int matrix[][100], int n) {
    return abs(calculateRecursive(matrix, n, 0));
}

