#  Note: This solution is O(N) time O(1) space, and beats 100% on leetcode

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j = 0;
        while(j<nums.size()&&nums[j]==0){
            j++;
        }
        for(int i = j+1; i < nums.size(); i++){
            if(nums[i]==0){
                swap(nums[i],nums[j]);j++;
                while(j<nums.size()&&nums[j]==0){
                    j++;
                }
                i = j;
            }
        }
        while(j<nums.size()&&nums[j]==1){
            j++;
        }
        for(int i = j+1; i < nums.size(); i++){
            if(nums[i]==1){
                swap(nums[i],nums[j]);j++;
                while(j<nums.size()&&nums[j]==1){
                    j++;
                }
                i = j;
            }
        }
    }
};
