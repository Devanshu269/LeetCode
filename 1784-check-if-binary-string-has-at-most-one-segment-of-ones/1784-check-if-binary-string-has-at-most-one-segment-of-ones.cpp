class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.length() == 2){
            return true;
        }
        for(int i=1; i<s.length(); i++){
            if(s[i] == '0'){
                for(int j=i+1; j<s.length(); j++){
                    if(s[j] == '1')
                        return false;
                }
            }
        }
        return true;
    }
    
};