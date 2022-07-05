class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         set<int> set;
    //after inserting nums will be sorted
    for(int i=0;i<nums.size();i++){
        set.insert(nums[i]);
    }
    int ans =0,count=0,prev=0;
    for(auto num:set){
        if(set.find(num-1)!=set.end()){
            count = prev+1; //track of prev count plus the current value count which is 1
            prev = count; //keeping the track of current count in prev for next element 
        }else{
            count= 1; //reset of count
            prev = count; 
        }
        ans = max(count,ans); 
    }
    return ans;
    }
};