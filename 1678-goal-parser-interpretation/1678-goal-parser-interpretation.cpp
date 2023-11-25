class Solution {
public:
    string interpret(string command) {
        string str = "";
        for(int i = 0; i < command.size(); i++) {
            if(command[i] == 'G') str += 'G';
            else if(command[i] == '(' && command[i + 1] == ')') {
                str += 'o';
                i++;
                
            }
            else if(command[i] == '(' && command[i + 1] == 'a' && command[i + 2] == 'l' && command[i + 3] == ')') {
                str += 'a';
                str += 'l';
                i += 3;
            } 
        }
        return str;
    }
};