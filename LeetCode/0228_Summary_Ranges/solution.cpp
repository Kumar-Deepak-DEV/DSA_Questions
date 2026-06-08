class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> s;
        if(nums.size()<2){
            for(int x:nums) s.push_back(to_string(x));
            return s;
        };
        int prev=nums[0];
        int a=nums[0];
        for(int i = 1; i<nums.size();i++){
            string temp="";
            if(nums[i]==a+ 1) a = nums[i];
            else{
                if(prev!=a)temp = to_string(prev)+"->"+to_string(a);
                else temp = to_string(a);
                s.push_back(temp);
                prev=nums[i];
                a = prev;
            }
            if(i == nums.size()-1){
                if(prev!=a)temp = to_string(prev)+"->"+to_string(a);
                else temp = to_string(a);
                s.push_back(temp);
                prev=nums[i];
                a = prev;
            }
        }
        return s;
    }
};