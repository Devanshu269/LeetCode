class Solution {
public:
    int maxSubArray(vector<int>& nums) {
            int max_sum = INT_MIN;
            int cuu_sum = 0;
            for(int i=0; i<nums.size(); i++){
            cuu_sum += nums[i];
            max_sum = max(max_sum, cuu_sum);
            if(cuu_sum < 0){
                cuu_sum = 0;
            }
        }
        return max_sum;
    }
};