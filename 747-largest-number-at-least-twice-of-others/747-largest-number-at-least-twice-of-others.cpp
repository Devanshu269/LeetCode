class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN, index = -1;
        for(int i=0; i<n; i++){
            if(maxi < nums[i]){
                maxi = nums[i];
                index = i;
            }
        }
        for(int i=0; i<n; i++){
            if((2*nums[i]) > maxi && nums[i] != maxi)
                return -1;
        }
        return index;
    }
};