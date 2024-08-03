class Solution {
public:
    bool isValid(string s) {
        stack <char> x;x.push(' ');
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                x.push(s[i]);
            }
            else if(s[i] == ')' && x.top() == '('){
                x.pop();
            }
            else if(s[i] == '}' && x.top() == '{'){
                x.pop();
            }
            else if(s[i] == ']' && x.top() == '['){
                x.pop();
            }
            else{
                return false;
            }
        }
        x.pop();
        if(x.empty()!=true){
            return false;
        }
        return true;
    }
};