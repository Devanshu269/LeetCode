class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int n = nums.size();
        
        int runningProd = 1;
        int maxProduct = INT_MIN;
        for(int i = 0; i < n; i++) {
            runningProd *= nums[i];
            maxProduct = max(maxProduct, runningProd);
            if(runningProd == 0) {
                runningProd = 1;
            }
        }
        
        runningProd = 1;
        for(int i = n-1; i >= 0; i--) {
            runningProd *= nums[i];
            maxProduct = max(maxProduct, runningProd);
            if(runningProd == 0) {
                runningProd = 1;
            }
        }
        
        return maxProduct;
        
    }
};