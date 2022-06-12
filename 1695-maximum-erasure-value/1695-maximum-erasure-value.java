class Solution {
    public int maximumUniqueSubarray(int[] nums) {
        Map<Integer, Integer> visited = new HashMap<>();
        int sum = 0;
        int max = 0;
        int prev_start = 0;
        for(int i = 0; i < nums.length; i++) {
            if(visited.get(nums[i]) != null) {
                int start = prev_start;
                int end = visited.get(nums[i]);
                while(start <= end) {
                    visited.put(nums[start], null);
                    sum -=nums[start++];
                }
                prev_start = start;
            }
            sum += nums[i];
            visited.put(nums[i], i);
            max = Math.max(max, sum);
        }
        return max;
    }
}