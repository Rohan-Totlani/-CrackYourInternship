class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;//target pointer
        int temp;
        for(auto &num:nums){
            if(num!=0){
                temp = nums[j];
                nums[j] = num;
                num = temp;
                j++;
            }
        }
    }
};
