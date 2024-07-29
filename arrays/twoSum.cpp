class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]=i;
        }
        /*for(auto &it:m){
            cout<<it.first<<" "<<it.second<<"\n";
        }*/
        for(int i = 0; i < nums.size(); i++){
            int c = target -nums[i];
            if(m[c]&&m[c]!=i){
                return {i,m[c]};
            }
        }
        return {-1};
    }
};
