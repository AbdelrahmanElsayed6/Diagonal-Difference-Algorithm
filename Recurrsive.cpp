#include <iostream>
#include <vector>
#include <cmath>
int calculateRecursive(const std::vector<std::vector<int>>& matrix, int n, int i) {
    if (i == n) return 0; 

    int rowDiff = matrix[i][i] - matrix[i][n - 1 - i];
    return rowDiff + calculateRecursive(matrix, n, i + 1);
}

int diagonalDifferenceRecursive(const std::vector<std::vector<int>>& matrix, int n) {
    return std::abs(calculateRecursive(matrix, n, 0));
}