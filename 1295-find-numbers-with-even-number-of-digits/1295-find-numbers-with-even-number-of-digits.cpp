class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int ans = 0;
        for(auto x: nums)
            ans += (int) log10(x)&1;
        return ans;
    }
};