class Solution {
public:
    string reverseWords(string s) {
        for(int i = 0; i < s.size(); i++) {
            int j = i;
            while(s[j] != ' ' && j < s.size()) j++;
            int k = j--;
            while(i < j) {
                swap(s[i], s[j]); i++; j--;
            }
            i = k;
        }
        return s;
    }
};