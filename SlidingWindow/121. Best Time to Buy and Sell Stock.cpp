class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1;
        int mx = 0;

        while(r < prices.size()){
            if(prices[l] < prices[r]){
                int profit = prices[r] - prices[l];
                if(mx < profit){
                    mx = profit;
                }
            }
            else{
                l = r;
            }
            r += 1;
        }

        return mx;
    }
};
