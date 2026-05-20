class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        // 2 maps...
        // outer loop to enter nos. and inner to calc the common....


        unordered_map<int,int> m1;
        unordered_map<int,int> m2;
        vector<int> ans;
        for(int i = 0; i<A.size();i++){
            m1[A[i]] +=1;
            m2[B[i]] +=1;
            int res=0;
            for(const auto &[key,value]:m1){
                res+=min(value,m2[key]);
            }
            ans.push_back(res);
        }
        return ans;

        // vector <int> freq(A.size()+1,0);
        // vector <int> res;
        // int count=0;
        // for(int i = 0; i<A.size();i++){
        //     freq[A[i]]++;
        //     freq[B[i]]++;
        //     if(freq[A[i]] == 2)count++;
        //     if(freq[B[i]] == 2 && A[i] != B[i])count++;
        //     res.push_back(count);
        // }
        // return res;
    }
};