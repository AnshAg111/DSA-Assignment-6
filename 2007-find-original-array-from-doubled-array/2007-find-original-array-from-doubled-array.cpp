class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>ans;
        if(changed.size()%2!=0) return ans;
        map<int, int>m;
        for(auto i:changed) m[i]++;
        while(!m.empty()){
            for(auto i:m){
                int a=i.first, b=i.second;
                // cout<<a<<" "<<b<<endl;
                vector<int>v;
                if((a==0 and m[a]%2!=0) or m[2*a]==0){
                    return v;
                }
                if(a==0){
                    for(int j=0; j<b/2; j++) ans.push_back(a);
                    m.erase(a);
                }
                else{
                    for(int j=0; j<b; j++) ans.push_back(a);
                    m.erase(a);
                    m[2*a]-=b;
                    if(m[2*a]==0) m.erase(2*a);
                    else if(m[2*a]<0) return v;
                }
                break;
            }
        }
        return ans;
    }
};