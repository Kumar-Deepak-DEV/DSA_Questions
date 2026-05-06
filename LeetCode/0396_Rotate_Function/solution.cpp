class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum = 0;
        int aid = 0;
        for(int i = 0; i<nums.size();i++){
            sum+=i*nums[i];
            aid +=nums[i];
        }
        int prev=sum;
        int j = nums.size()-1;
        while(j>=0){
            prev  =prev - nums.size()*nums[j] + aid;
            sum = max(sum,prev);
            j--;
            cout<<prev<<endl;
        }
        return sum;
    }
};