class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN, mini = INT_MAX;
        for(int i=0; i<n; i++){
            maxi = max(maxi, nums[i]);
            mini = min(mini, nums[i]);
        }
        int count=0;
        for(int i=0; i<n; i++){
            if(mini<nums[i] && nums[i]<maxi)
                count++;
        }
        return count;
    }
};