#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int rows = matrix.size();
    int cols = matrix[0].size();

    unordered_set<int> rowSet;
    unordered_set<int> colSet;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                rowSet.insert(i);
                colSet.insert(j);
            }
        }
    }

    for (int i : rowSet) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = 0;
        }
    }

    for (int j : colSet) {
        for (int i = 0; i < rows; i++) {
            matrix[i][j] = 0;
        }
    }
}