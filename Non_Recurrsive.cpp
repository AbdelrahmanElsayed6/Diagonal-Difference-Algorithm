#include <iostream>
#include <vector>
#include <cmath>

int diagonalDifferenceIterative(const std::vector<std::vector<int>>& matrix, int n) {
    int primarySum = 0;
    int secondarySum = 0;
    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];            
        secondarySum += matrix[i][n - 1 - i];  
    }
    return std::abs(primarySum - secondarySum);
}