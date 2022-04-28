class Solution {
public:
    string convert(string s, int numRows) {
        int N = s.length();
        if(numRows == 1){
            return s;
        }
        string res;
        int inc = 2 * (numRows -1);
        for(int i=0; i<numRows; i++){
            for(int j=i; j<N; j+=inc){
                res.push_back(s[j]);
                if(i>0 && i<numRows-1 && (j+inc-2*i) < N){
                    res.push_back(s[j+inc-2*i]);
                }
            }
        }
        return res;
    }
    
};