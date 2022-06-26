class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();
        int i=0, j=0, count = 0;
        // cout << " n = " << n << " m = " << m << endl;
        while(i<n && j<m){
            if(s[i] == t[j]){
                count++;
                i++;
                // cout << "I = " << i << endl;
            }
            // cout << "J = " << j << endl;
            j++;
        }
        // cout << " count = " << count << endl;
        
        if(count == n)
            return true;
        return false;
        
    }
};