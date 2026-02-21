class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int sum=1e9;
        for(int i=0; i<tasks.size();i++){
            int temp=tasks[i][0]+tasks[i][1];
            if(temp<sum)sum= temp;
        }
    return sum;
    }
};