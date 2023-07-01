class Solution {
    public boolean validMountainArray(int[] arr) {
        int n=arr.length, i=1;
        if(n<3) return false;
        while(i<n && arr[i]>arr[i-1]){
            i++;
        }
        if(i==1 || i==n || arr[i]==arr[i-1]) return false;
        while(i<n && arr[i]<arr[i-1]) i++;
        if(i==n) return true;
        return false;
    }
}