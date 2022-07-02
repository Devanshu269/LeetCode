class Solution {
public:
    void convert(vector<string> &str, string s, int n){
        string temp;
        for(int i=0; i<=n; i++){
            if(s[i] == ' ' || i == n){
                str.push_back(temp);
                temp = "";
            }else{
                temp += s[i];
            }  
        }
    }
    bool wordPattern(string pattern, string s) {
        int n = s.length();
        vector<string> str;
        convert(str, s, n);
        // for(int i=0; i<str.size(); i++){
        //     cout << str[i] << " " ; 
        // }
        int m = pattern.length();
        int k = str.size();
        if(m != k){
            return false;
        }
        map<string, char> mp;
        for(int i=0; i<m; i++){
            if(mp.find(str[i]) == mp.end()){
                mp[str[i]] = pattern[i];
            }else{
                if(mp[str[i]] == pattern[i])
                    continue;
                else
                    return false;
            }
        }
        map<char, string> mp2;
        for(int i=0; i<m; i++){
            if(mp2.find(pattern[i]) == mp2.end()){
                mp2[pattern[i]] = str[i];
            }else{
                if(mp2[pattern[i]] == str[i])
                    continue;
                else
                    return false;
            }
        }
        return true;;
    }
};