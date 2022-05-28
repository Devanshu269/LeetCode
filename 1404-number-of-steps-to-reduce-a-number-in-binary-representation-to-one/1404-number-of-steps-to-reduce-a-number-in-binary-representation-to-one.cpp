class Solution {
public:
    int numSteps(string s) {
        int count = 0;
        while(s.size() != 1){
            int n = s.size();
            if(s[n-1]-'0' == 0)
                s.pop_back();
            else{
                int c=1;
                string ans="";
                for(int i=s.size()-1;i>=0;i--){
                    if(c==1){
                        if(s[i]-'0'==1){
                            c=1;
                            ans='0'+ans;
                        }
                        else{
                            c=0;
                            ans='1'+ans;
                        }
                    }
                    else{
                        ans=s[i]+ans;
                    }
                }
            if(c==1) 
                ans='1'+ans;
                s = ans;
            }
            count++;
        }
        return count;
    }
};