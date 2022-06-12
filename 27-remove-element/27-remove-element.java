
import java.util.Arrays;
class Solution {
    public int removeElement(int[] nums, int val) {
        Arrays.sort(nums);
        int insertPointer = 0;
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] != val) {
                nums[insertPointer] = nums[i];
                insertPointer++;
            }
        }

        return insertPointer;
    }
}