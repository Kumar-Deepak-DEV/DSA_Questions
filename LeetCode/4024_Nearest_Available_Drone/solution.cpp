class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int mind=INT_MAX;
        int mini = INT_MAX;
        for(int i = 0; i<drones.size();i++){
            int k = abs(drones[i][0]-target[0])  + abs(drones[i][1]-target[1]);
            if(k <= drones[i][2]){
                if(k < mind){
                    mind = k;
                    mini = i;
                }
            }
        }
        if(mini == INT_MAX) return -1;
        return mini;
    }
};