class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int len = code.size();
        for(int x = 0; x<len;x++)code.push_back(code[x]);
        vector<int> ans;
        int sum = 0;

        if(k>=0){
            for(int i = 1; i<k+1;i++)sum+=code[i];
            ans.push_back(sum);
            for(int i = 1;i<len;i++){
                sum = sum-code[i]+code[i+k];
                ans.push_back(sum);
            }
        }
        else{
            for(int i = 2*len -1; i>2*len+k-1; i--) sum+=code[i];
            ans.push_back(sum);
            for(int i = 2*len-1;i>len;i--){
                sum = sum-code[i]+code[i+k];
                ans.push_back(sum);
            }
            reverse(ans.begin()+1,ans.end());
        }
        return ans;
    }
};