class Solution {
public:
    vector<int> diStringMatch(string s) {
        int l=0, r=s.length(), n=s.length();
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(s[i]=='I'){
                ans.push_back(l);
                l++;
            }
            else{
                ans.push_back(r);
                r--;
            }
        }
        ans.push_back(l);
        return ans;
    }
};