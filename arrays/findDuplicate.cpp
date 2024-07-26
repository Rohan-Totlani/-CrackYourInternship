class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[nums[0]];//one step 
        int fast = nums[nums[nums[0]]];//double step
        while(fast!=slow){
            //finds first point of intersection in a chained linked list
            fast = nums[nums[fast]];
            slow = nums[slow];
        }
        int n = nums[0];
        while(n!=slow){
            //reaches the the number that created the loop in the linked list
            slow = nums[slow];
            n = nums[n];
        }
        return n;
    }
};
