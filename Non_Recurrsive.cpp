#include <iostream>
#include <cmath>

// Non_Recurrsive :
int diagonalDifferenceIterative(int matrix[][100], int n) {
    int primarySum = 0;
    int secondarySum = 0;

    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];
        secondarySum += matrix[i][n - 1 - i];
    }

    return abs(primarySum - secondarySum);
}
