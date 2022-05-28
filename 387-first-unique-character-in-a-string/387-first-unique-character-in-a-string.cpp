class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> hm;
        int n = s.length();
        for(int i=0; i<n; i++){
            hm[s[i]]++;
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            if(hm[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};