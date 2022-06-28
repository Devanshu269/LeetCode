class Solution {
public:
    string rev(string s, int i, int j){
        string temp;
        while(j >= i){
            temp += s[j];
            j--;
        }
        return temp;
    }
    string reverseWords(string s) {
        int n = s.length();
        if(n == 1)
            return s;
        int i=0, j=0;
        string ans;
        int flag = 0;
        while(i<n && j<n){
            if(s[j] != ' '){
                j++;
                // cout << " j for space " << j << endl;
            }
            else{
                if(i == 0){
                    // cout << " j before rev " << j << " i before " << i << endl;
                    ans += rev(s, i, j-1);
                    j += 1, i=j;
                    // cout << " j after rev " << j << " i after " << i << endl;
                }else{
                    ans = ans + ' ' + rev(s, i, j-1);
                    j += 1, i=j;
                }
                
            }
            if(j == n-1){
                if(i==0)
                    ans += rev(s, i, j);
                else
                    ans += ' ' + rev(s, i, j);
                // cout << " j before rev " << j << " i before " << i << endl;
                
                // cout << " j after rev " << j << " i after " << i << endl;
            }
        }
        return ans;
    }
};