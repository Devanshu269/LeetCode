class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.length();
        int i=0;
        while(i<n){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else if(st.empty()){
                if(s[i] == ')' || s[i] == ']' || s[i] == '}')
                    return false;
            }else{
                if(st.top() == '(' && s[i] == ')')
                    st.pop();
                else if(st.top() == '[' && s[i] == ']')
                    st.pop();
                else if(st.top() == '{' && s[i] == '}')
                    st.pop();
                else
                    return false;
            }
            i++;
        }
        if(!st.empty())
            return false;
        return true;
    }
};