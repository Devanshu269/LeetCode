class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)
            return false;
        String s = Integer.toString(x);
        int n = s.length();
        int i=0;
        while(i<n){
            if(s.charAt(i) != s.charAt(n-1)){
                return false;
            }
            i++;
            n--;
        }
        return true;
    }
}