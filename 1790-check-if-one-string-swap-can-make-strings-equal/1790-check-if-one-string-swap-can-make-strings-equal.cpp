class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
            int cnt=0;
            int arr[4]={0};
            for(int i=0;i<s1.length();i++)
            {       
                if(s1[i]!=s2[i]){
                    cnt++;
                    arr[cnt]=i;
                } 
                if(cnt>2)
                    return false;        
            }
            swap(s1[arr[1]],s1[arr[2]]);     
            if(s1==s2)
                return true;
            else 
                return false;
    }
};