class Solution {
public:
    void rotate(vector<int>& nums, int k) {



        // int size = nums.size();
        // k = size - k % size;
        // if(k!=size){
        //     vector<int> res;
        //     int i = 0;
        //     while(res.size()!=nums.size()){
        //         if(k>0){
        //             i++;
        //             k--;
        //             continue;
        //         }
        //         else{
        //             res.push_back(nums[i]);
        //             i++;
        //             if(i==size)i=0;
        //         }
        //     }
        //     nums=res;
        // }

        k = k % nums.size() ; 
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());

    }
};