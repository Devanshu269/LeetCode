class Solution {
public:
    int hammingWeight(uint32_t n) {
        double count = 0;
        while(n>0){
            if((n&1) == 1)
                count++;
            n = n>>1;
        }
        return (int)count;
    }
};