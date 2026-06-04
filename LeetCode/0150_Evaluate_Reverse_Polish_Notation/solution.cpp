class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" &&
                tokens[i] != "/")
                st.push(tokens[i]);
            else {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                if (tokens[i] == "*")
                    b = a * b;
                else if (tokens[i] == "/")
                    b = b / a;
                else if (tokens[i] == "+")
                    b = a + b;
                else if (tokens[i] == "-")
                    b = b - a;
                string s = to_string(b);
                st.push(s);
            }
        }
        return stoi(st.top());
    }
};