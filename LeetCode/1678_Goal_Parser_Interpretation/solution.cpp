class Solution {
public:
    string interpret(string command) {
        string len = "";
        for(int i = 0; i<command.size();i++){
            if(command[i] == 'G') len+='G';
            else if(command[i] == '(' && command[i+1] == ')' ) {
                i++;
                len+='o';
            }
            else {
                i+=3;
                len+="al";
            }
        }
        return len;
    }
};