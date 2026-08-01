class Solution {
public:
    int prec(char c) {
    if (c == '^')  
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
    }
    string infixToPostfix(string s) {
        stack<char> st; 
    string result;  
     for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
        else if (c == '(')
            st.push('(');
        else if (c == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while (!st.empty() && prec(s[i]) <= prec(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    return result;
    }

public:
    string prefixToInfix(string s) {
        stack<string> stk;
        int n = s.size();

        for(int i = n - 1;i >= 0;i --){
            char c = s[i];

            if(isalnum(c)){
                stk.push(string(1,c));
            }
            else{
                string op1 = stk.top();stk.pop();
                string op2 = stk.top();stk.pop();

                stk.push("(" + op1 + c + op2 + ")");
            }
        }
        return stk.top();
    }

};