class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        int count = 0;
        for(auto it: mp){
            int t = it.second;
            count += (t*(t-1))/2;
        }
        return count;
    }
};