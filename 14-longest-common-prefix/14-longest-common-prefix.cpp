class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        string temp1 = strs[0], temp2 = strs[strs.size()-1];
        int n = temp1.size();
        int i=0; 
        string ans = "";
        while(i<n){
            if(temp1[i] != temp2[i])
                break;
            else
                ans += temp1[i];
                i++;
        }
        return ans;
    }
};