// Given two sparse matrices mat1 of size m x k and mat2 of size k x n, return the result of mat1 x mat2. You may assume that multiplication is always possible.

#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    vector<vector<int>> multiply(vector<vector<int>> &mat1, vector<vector<int>> &mat2)
    {
        int m = mat1.size(), k = mat2.size(), n = mat2[0].size();
        vector<vector<int>> ans(m, vector<int>(n));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans[i][j] = 0;
                for (int l = 0; l < k; l++)
                {
                    ans[i][j] += (mat1[i][l] * mat2[l][j]);
                }
            }
        }
        return ans;
    }
};
int main()
{
    int n, m, k;
    cin >> m >> k >> n; // no.of rows in first matrix, no.of columns in first matrix or no. of rows in second matrix, no. of columns in second matrix respectively.
    vector<vector<int>> mat1(m, vector<int>(k)), mat2(k, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
            cin >> mat1[i][j];
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> mat2[i][j];
    }
    solution ob;
    vector<vector<int>> v = ob.multiply(mat1, mat2);
    cout << "matrices after multilpication: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}