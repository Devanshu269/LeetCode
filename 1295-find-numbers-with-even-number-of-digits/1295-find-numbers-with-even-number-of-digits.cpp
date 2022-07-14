class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        // int ans = 0;
        // for(auto x: nums)
        //     ans += (int) log10(x)&1;
        // return ans;
        for(auto x: nums){
            string s = to_string(x);
            if(s.length()%2 == 0)
                count++;
        }
        return count;
    }
};