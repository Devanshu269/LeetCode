class Solution {
    public int searchInsert(int[] nums, int target) {
         int n= nums.length;
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target>nums[mid]){
                start= mid+1;
            }
            else if (target<nums[mid]){
                end=mid-1;
            }else{
                return mid;
            }
        }return start;
    }
}