class Solution {
public:
    int fibCheck(int n){
        if(n == 0 || n == 1)
            return n;
        return fibCheck(n-1) + fibCheck(n-2);
    }
    int fib(int n) {
        return fibCheck(n);
    }
};