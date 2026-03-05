class Solution {
public:
    int minOperations(string s) {
        int count = 0;
        int num = s[0];
        for (int i = 1; i < s.size(); i++) {
            if (num == '0') {
                if (s[i] == '0')
                    count++;
                num = '1';
                // cout << i<<" " << s[i]<<" "  << num <<" " << count<<endl;
            } else {
                if (s[i] == '1')
                    count++;
                num = '0';
                // cout << i <<" " << s[i] <<" " << num <<" " <<count<< endl;
            }
        }
        // cout<<count<<endl;
        return count > s.size() - count ? s.size() - count : count;
    }
};