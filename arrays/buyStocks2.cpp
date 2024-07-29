// O(N) time and O(1) space, beats 90% on leetcode
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1){
            return 0;
        }
        int ans = 0;int buy=-1;
        if(prices[0]<prices[1]){
            buy = prices[0];
        }
        for(int i = 1;i < prices.size()-1; i++){
            if(prices[i]<=prices[i-1]&&prices[i]<=prices[i+1]){
                buy = prices[i];
            }
            if(prices[i]>=prices[i-1]&&prices[i]>=prices[i+1]&&buy>=0){
                ans += prices[i]-buy;
                buy = -1;
            }
        }
        if(prices[prices.size()-1]>prices[prices.size()-2]&&buy>=0){
            ans+= prices[prices.size()-1] - buy;
        }
        return ans;
    }
};
