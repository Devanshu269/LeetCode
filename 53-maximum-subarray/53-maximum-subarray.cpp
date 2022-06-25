class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int se=0, en=0;
        int sum = 0, ans = INT_MIN;
        for(int i=0; i<n; i++){
            sum += nums[i];
            if(sum > ans){
                ans = sum;
                en = i;
            }
            // ans = max(ans, sum);
            if(sum <= 0){
                sum = 0;
                se = i+1;
            }
        }
        cout <<"Start index = " << se << " End index = " << en << endl;
        return ans;
    }
};