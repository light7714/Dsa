//leetcode 566. Reshape the Matrix

// In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.

// You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.

// The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

// If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m = mat.size();
    int n = mat[0].size();
    if(r*c != m*n)
        return mat;
    
    int size = r*c;
    vector<vector<int>> ans(r, vector<int>(c));
    for(int i=0; i<size; i++) {
        ans[i/c][i%c] = mat[i/n][i%n];
    }
    return ans;
}