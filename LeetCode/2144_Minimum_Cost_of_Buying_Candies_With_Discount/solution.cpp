class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        reverse(cost.begin(),cost.end());
        int count = 0;
        for(int i =0;i<cost.size();i++ ){
            if((i+1)%3 == 0) continue;
            count+=cost[i];
            cout<<cost[i]<<endl;
        }
        return count;
    }
};