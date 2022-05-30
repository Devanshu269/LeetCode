class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int temp = 0;
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            temp = target - nums[i];
            for(int j=i+1; j<n; j++){
                if(temp == nums[j]){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};