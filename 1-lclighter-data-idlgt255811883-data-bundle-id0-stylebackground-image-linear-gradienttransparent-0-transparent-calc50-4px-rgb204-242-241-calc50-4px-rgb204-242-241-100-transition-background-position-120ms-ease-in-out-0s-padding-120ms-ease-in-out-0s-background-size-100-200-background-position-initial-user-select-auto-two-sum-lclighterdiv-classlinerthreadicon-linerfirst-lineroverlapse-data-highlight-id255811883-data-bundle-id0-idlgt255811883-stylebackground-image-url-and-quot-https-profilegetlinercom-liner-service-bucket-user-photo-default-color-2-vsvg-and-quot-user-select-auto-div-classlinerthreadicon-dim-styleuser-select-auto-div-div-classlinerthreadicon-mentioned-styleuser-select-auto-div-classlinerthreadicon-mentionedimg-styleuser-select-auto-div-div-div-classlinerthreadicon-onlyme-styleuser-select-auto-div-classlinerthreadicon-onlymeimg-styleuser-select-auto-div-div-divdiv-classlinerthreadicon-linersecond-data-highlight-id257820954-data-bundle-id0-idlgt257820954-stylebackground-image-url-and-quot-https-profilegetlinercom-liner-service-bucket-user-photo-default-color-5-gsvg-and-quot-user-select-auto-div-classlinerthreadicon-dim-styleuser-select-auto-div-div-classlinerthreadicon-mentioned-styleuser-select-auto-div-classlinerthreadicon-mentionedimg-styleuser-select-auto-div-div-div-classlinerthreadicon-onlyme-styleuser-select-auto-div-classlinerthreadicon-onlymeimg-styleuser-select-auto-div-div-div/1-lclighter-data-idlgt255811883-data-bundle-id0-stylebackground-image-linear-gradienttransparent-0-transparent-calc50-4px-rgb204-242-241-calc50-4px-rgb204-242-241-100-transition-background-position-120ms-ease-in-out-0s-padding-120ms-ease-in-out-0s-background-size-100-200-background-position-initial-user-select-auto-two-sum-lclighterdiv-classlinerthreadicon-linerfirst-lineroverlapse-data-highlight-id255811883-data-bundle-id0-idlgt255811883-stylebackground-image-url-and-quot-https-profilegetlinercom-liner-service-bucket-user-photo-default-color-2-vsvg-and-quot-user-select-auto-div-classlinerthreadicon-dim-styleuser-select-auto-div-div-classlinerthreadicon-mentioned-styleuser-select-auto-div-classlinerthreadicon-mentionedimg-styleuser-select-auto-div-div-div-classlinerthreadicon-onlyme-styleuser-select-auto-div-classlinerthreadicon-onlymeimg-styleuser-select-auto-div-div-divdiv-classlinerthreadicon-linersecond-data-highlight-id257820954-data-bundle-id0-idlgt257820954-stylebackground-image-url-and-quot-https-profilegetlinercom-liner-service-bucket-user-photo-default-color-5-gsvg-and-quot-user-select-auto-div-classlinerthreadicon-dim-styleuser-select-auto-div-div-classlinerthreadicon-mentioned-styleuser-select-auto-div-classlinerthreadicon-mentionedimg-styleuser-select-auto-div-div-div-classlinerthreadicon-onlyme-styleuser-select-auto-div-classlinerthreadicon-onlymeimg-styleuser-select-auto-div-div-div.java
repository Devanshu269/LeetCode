class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        Map<Integer, Integer> mp = new HashMap<>();
        int[] list = new int[2];
        for(int i=0; i<n; i++){
            int temp = target - nums[i];
            if(mp.containsKey(temp)){
                int j = mp.get(temp);
                list[0] = i;
                list[1] = j;
                return list;
            }
            mp.put(nums[i], i);
        }
        return list;
    }
}