class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
		vector<int> vec;
	  //Map to store the frequency of all elements
	    map<int,int> mp;
	    for(int i=0;i<n;i++){
		 mp[nums[i]]++;
	    }
        for (auto i : mp){
            if(i.second>(n/3))
                vec.push_back(i.first);
        }
	    return vec;
    }
};