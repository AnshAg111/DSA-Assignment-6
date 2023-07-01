class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int i=0, m=matrix[0].length, j=matrix.length*m-1;
        if(i==j && matrix[i][j]==target) return true;
        while(i<j){
            int mid=(i+j)/2, x=mid/m, y=mid%m;
            if(matrix[x][y]>target) j=mid-1;
            else if(matrix[x][y]<target) i=mid+1;
            else return true;
            if(j>=0){
                x=j/m;
                y=j%m;
                if(matrix[x][y]==target) return true;
            }
        }
        return false;
    }
}