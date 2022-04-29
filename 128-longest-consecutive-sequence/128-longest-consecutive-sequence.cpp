class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<long> hs;
        int N = nums.size();
        int ans = 0;
        for(int i=0; i<N; i++){
            hs.insert(nums[i]);
        }
        for(int i=0; i<N; i++){
            int diff = nums[i] - 1;
            if(hs.find(diff) == hs.end()){
                int chain = 1;
                int x = nums[i] + 1;
                while(hs.find(x) != hs.end()){
                    chain++;
                    x++;
                }
                ans = max(ans, chain);
            }
        }
        return ans;
    }
};