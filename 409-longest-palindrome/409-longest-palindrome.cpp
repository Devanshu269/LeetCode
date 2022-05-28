class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>m;
        for(int i=0;i<s.size();i++)
            {
                m[s[i]]++;
            }
        int ans=0;
        for(auto i:m)
        { 
            if(i.second%2==0)
                ans+=i.second;
            else if(i.second == 1)
                    continue;
            else
            {
                ans+=i.second-1;
            }
        }
        if(ans==s.length())
            return ans;
        return ans+1; 
    }
};