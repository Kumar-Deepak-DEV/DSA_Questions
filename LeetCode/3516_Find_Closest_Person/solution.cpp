class Solution {
public:
    int findClosest(int x, int y, int z) {
        int n1=z-x;
        if(n1<0)n1*=-1;
        int n2=z-y;
        if(n2<0)n2*=-1;
        if(n1==n2)return 0;
        else {
            if(n1<n2)return 1;
            return 2;
        }
    }
};