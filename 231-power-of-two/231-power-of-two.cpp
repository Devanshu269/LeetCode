class Solution {
public:
    bool isPowerOfTwo(int n) {
        // if(n==0)
        //     return false;
        // else if(n > 0 && (n & n-1) == 0 )
        //     return true;
        // else 
        //     return false;
        return n > 0 && not (n & n - 1);
    }
};