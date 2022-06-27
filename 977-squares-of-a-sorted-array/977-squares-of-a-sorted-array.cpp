class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> results(nums.size(),0);
        int i=0,j=nums.size()-1,po=nums.size()-1;
        while(i<=j){
            if(abs(nums[i])<abs(nums[j])){
                results[po]=nums[j]*nums[j];
                j--;
                po--;
            }
            else{
                results[po]=nums[i]*nums[i];
                i++;
                po--; 
            }
        }
    return results;
    }
};