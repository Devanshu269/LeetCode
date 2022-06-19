class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if(target <= nums[0]){
            return 0;
        }
        if(target > nums[n-1])
            return n;
        int low=0, high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2 ;
            if(nums[mid] == target)
                return mid;
            if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};