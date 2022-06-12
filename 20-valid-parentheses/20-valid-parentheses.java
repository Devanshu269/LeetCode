class Solution {
    public boolean isValid(String s) {
        Stack<Character> st = new Stack<Character>();
        int n = s.length();
        if(n==1)
            return false;
        for(int i=0; i<n; i++){
            if(s.charAt(i) == '(' || s.charAt(i) == '{' || s.charAt(i) == '['){
                st.push(s.charAt(i));
            }
            if(s.charAt(i) == ')' ){
                if(st.size() == 0)
                    return false;
                if(st.peek() == '(')
                    st.pop();
                else
                    return false;
            }
            if(s.charAt(i) == '}' ){
                if(st.size() == 0)
                    return false;
                if(st.peek() == '{')
                    st.pop();
                else
                    return false;
            }
            if(s.charAt(i) == ']' ){
                if(st.size() == 0)
                    return false;
                if(st.peek() == '[')
                    st.pop();
                else
                    return false;
            }
        }
        if(st.size() != 0)
            return false;
        return true;
    }
}