class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        // vector<vector<int>>vec(10);
        // for(int x : nums){
        //     string s = to_string(x);
        //     char max = '0';
        //     char min = '9';
        //     for(char a : s){
        //         if(min>a)min=a;
        //         if(max<a)max=a;
        //     }
        //     vec[max-min].push_back(x);
        // }
        // for(int i = 9; i>=0;i--){
        //     if(vec[i].size()==0)continue;
        //     int sum = 0;
        //     for(int x:vec[i]) sum+=x;
        //     return sum;
        // }
        // for(int i = 9; i>=0;i--){
        //     if(vec[i].size()==0)continue;
        //     int sum = 0;
        //     for(int x:vec[i]) sum+=x;
        //     return sum;
        // }
        // return 0;


        int diff = 0;
        int diff2 = 0;
        vector<int>vec;
        for(int x : nums){
            string s = to_string(x);
            char max = '0';
            char min = '9';
            for(char a : s){
                if(min>a)min=a;
                if(max<a)max=a;
            }
            diff2 = max-min;
            if(diff2 > diff){
                vec={};
                vec.push_back(x);
                diff=diff2;
            }
            else if(diff2==diff)vec.push_back(x); 
        }
            int sum = 0;
            for(int x:vec) sum+=x;
            return sum;
    }
};