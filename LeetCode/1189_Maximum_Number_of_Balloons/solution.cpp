class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector <char> bal = {'b','a','l','l','o','o','n'};
        unordered_map<char,int>maps;

        for(char x:text) maps[x]++;

        // int count = 0;
        // while (true){
        //     for(char c : bal){
        //     if(maps[c]==0)return count;
        //     maps[c]--;
        //     if(c=='n')count++;
        // }
        // }

        int count = maps['b'];
        maps['l']/=2;
        maps['o']/=2;
        for( char c : bal){
            count = min(count,maps[c]);
        }
        return count;
    }
};