class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxi = *max_element(lights.begin(),lights.end());
        int ans = INT_MIN;
        for(int x : arrivalTime){
            int i = x%period;
            if(maxi<=i) {
                ans = max(ans,period-i);
            }
        }
        if(ans == INT_MIN) return 0;
        return ans;
    }
};