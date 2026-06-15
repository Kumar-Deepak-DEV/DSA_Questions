class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=0;
        int price = prices[0];
        for(int i = 0;i<prices.size();i++){
            if(prices[i]<price)price=prices[i];
            int k = prices[i]-price;
            if(k>mini)mini = k;
        }
        return mini;
    }
};