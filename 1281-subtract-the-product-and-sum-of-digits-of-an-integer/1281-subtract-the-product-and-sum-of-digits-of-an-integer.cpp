class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, pro=1, res;
        while(n>0){
            int t = n%10;
            n = n/10;
            sum += t;
            pro *= t;
        }
        res = pro - sum;
        return res;
    }
};