class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n, vector<int>(n));
        int r=n, b=n, l=0, t=1, i=0, j=0, k=1;
        while(true){
            if(j>=r or k>n*n) break;
            while(j<r){
                matrix[i][j]=k;
                k++;
                j++;
            }
            r--;
            j--;
            i++;
            if(i>=b or k>n*n) break;
            while(i<b){
                matrix[i][j]=k;
                k++;
                i++;
            }
            b--;
            i--;
            j--;
            if(j<l or k>n*n) break;
            while(j>=l){
                matrix[i][j]=k;
                k++;
                j--;
            }
            l++;
            j++;
            i--;
            if(i<t or k>n*n) break;
            while(i>=t){
                matrix[i][j]=k;
                k++;
                i--;
            }
            i++;
            t++;
            j++;
        }
        return matrix;
    }
};