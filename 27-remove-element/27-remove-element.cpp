class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
               int k=nums.size();
        for(auto i:nums){
            if(i==val){
                k--;
            }
        }
        int i=0,j=nums.size()-1;
        while(j>i){
            while(j>i and nums[i]!=val){
                cout<<"control";
                i++;
                if(i>=j){
                    return k;
                }
            }
            while(j>i and nums[j]==val){
                j--;
                if(i>=j){
                    return k;
                }
            }
            swap(nums[i],nums[j]);
            cout<<i<<" "<<j;
            i++;j--;
        }
        return k;

    }
};