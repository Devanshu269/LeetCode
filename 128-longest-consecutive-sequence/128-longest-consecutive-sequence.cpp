class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        set<int> mp;
        for(int i=0; i<n; i++){
            mp.insert(nums[i]);
        }
        int ans = 0;
        for(auto it : mp){
            if(mp.find(it-1) != mp.end()){
                continue;
            }else{
                int count=0, x = it;
                while(mp.find(x) != mp.end()){
                    count++, x++;
                }
                ans = max(ans, count);
            }
        }
        return ans;
    }
};