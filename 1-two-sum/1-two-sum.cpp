class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> mp;
        for(int i=0; i<n; i++){
            if(mp.find(target-nums[i]) != mp.end()){
                return {mp[target-nums[i]], i};
            }
            mp[nums[i]] = i;
        }
        return {};
        //this will work when array is sorted
        // int i=0, j=n-1;
        // while(i<j){
        //     int temp = target - nums[i];
        //     if(temp == nums[j])
        //         return {i, j};
        //     else if(nums[i] + nums[j] > target)
        //         j--;
        //     else{
        //         i++;
        //     }
        // }
    }
};