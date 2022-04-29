class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int N = nums.size();
    int candidate = nums[0];
    int count = 1;
    int index = 0;
    for(int i=1; i<N; i++){
        if(candidate == nums[i]){
            count++;
        }else{
            count--;
        }
        if(count == 0){
            candidate = nums[i];
            index = i;
            count = 1;
        }
    }
    return nums[index];
    }
};