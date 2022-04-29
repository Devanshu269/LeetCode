class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
		vector<int> vec;
	    map<int,int> mp;
	    for(int i=0;i<n;i++){
		 mp[nums[i]]++;
	    }
        int ans;
        for (auto i : mp){
            if(i.second>(n/2)){
                ans = i.first;
                break;
            }
        }
        return ans;
    }
};