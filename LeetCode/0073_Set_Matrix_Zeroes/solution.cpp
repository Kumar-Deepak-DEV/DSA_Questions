class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector <int> mi;
        vector <int> mj;

        for(int i = 0; i<matrix.size();i++){
            for(int j = 0; j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    mi.push_back(i);
                    mj.push_back(j);
                }
            }
        }
        for(int i = 0; i<mi.size();i++){
            cout<<mi[i]<<endl;
            for(int j = 0; j<matrix[mi[i]].size();j++)matrix[mi[i]][j] = 0;
        }
        for(int i = 0; i<mj.size();i++){
            for(int j = 0; j<matrix.size();j++)matrix[j][mj[i]] = 0;
        }
    }
};