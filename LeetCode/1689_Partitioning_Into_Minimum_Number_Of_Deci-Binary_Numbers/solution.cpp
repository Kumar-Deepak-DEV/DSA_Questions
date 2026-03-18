class Solution {
public:
    int minPartitions(string n) {
        int i = 0;
        for(int j = 0; j<n.size();j++){
            int a = n[j]-'0';
            cout<<a<<endl;
            if(i<a) i=a;
        }
        return i;
    }
};