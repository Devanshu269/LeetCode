class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = needle.length();
        int n2 = haystack.length();
        if(n1 == 0)
            return 0;
        if(n2 == 0)
            return -1;
        int i=0, j=0;
        int s=0,e=0;
        while(i<n1 && j<n2){
            if(needle[i] == haystack[j]){
                s = j;
                e = j;
                while(i<n1 && j<n2 && needle[i] == haystack[j]){
                    i++, j++;
                }
                // cout << "I value in while = " << i << endl;
                if(i<n1){
                    i=0;
                    j = e ;
                }                   
                else 
                    return s;
            }
            j++;
        }
        // cout << "I value = " << i << endl;
        // cout << "s value = " << s << endl;
        return -1;
    }
};