class Solution {
    public int findMaxLength(int[] nums) {
        int ans=0, sum=0;
        HashMap<Integer, Integer>m=new HashMap<>();
        for(int i=0; i<nums.length; i++){
            if(nums[i]==0) sum--;
            else sum++;
            if(sum==0) ans=i+1;
            else if(m.containsKey(sum)) ans=Math.max(ans, i-m.get(sum));
            else m.put(sum, i);
        }
        return ans;
    }
}