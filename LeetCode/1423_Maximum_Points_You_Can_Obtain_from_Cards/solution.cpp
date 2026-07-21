class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        // return 0;
        int len = cardPoints.size();
        vector<int> a;

        for(int i = len-k;i<cardPoints.size();i++) a.push_back(cardPoints[i]);

        for(int i = 0;i<k;i++) a.push_back(cardPoints[i]);

        int i = 0; 
        int j = 0;
        int sum = 0;
        int ans = 0;

        for(; i<k;i++)sum+=a[i];

        ans = sum;

        for(;i<a.size();i++){
            sum-=a[j];
            sum+=a[i];
            ans = max(ans,sum);
            j++;
        }
        return ans;
    }
};