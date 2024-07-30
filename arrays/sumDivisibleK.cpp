class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        int sum = 0;
        unordered_map<int,int>m;
        m[0] = 1;int x;
        for(int i = 0; i < nums.size(); i++){
            sum+=nums[i];
            x = sum%k>=0?sum%k:(sum%k)+k;
            if(m[x]>0){
                ans+=m[x];
            }
            
            m[x]++;
        }
        return ans;
    }
};
