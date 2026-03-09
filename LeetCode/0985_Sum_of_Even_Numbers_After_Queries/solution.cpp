class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> res;
        // for(int i = 0;i<queries.size();i++){
        //     nums[queries[i][1]]+=queries[i][0];
        //     int sum = 0;
        //     for(int j = 0;j<nums.size();j++){
        //         if(nums[j]%2 == 0)sum+=nums[j];
        //     }
        //     res.push_back(sum);
        // }
        // return res;

        nums[queries[0][1]]+=queries[0][0];
        int sum =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2 == 0)sum+=nums[i];
        }
        res.push_back(sum);
        cout<<sum<<endl;
        for(int i = 1; i<queries.size();i++){
            // cout<<1<<endl;
            if(nums[queries[i][1]] %2 == 0) sum-=nums[queries[i][1]];
            nums[queries[i][1]]+=queries[i][0];

            if(nums[queries[i][1]] % 2 == 0) sum+=nums[queries[i][1]];
            res.push_back(sum);
            
        }
        return res;
    }
};