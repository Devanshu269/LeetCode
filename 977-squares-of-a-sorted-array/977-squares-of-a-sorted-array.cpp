class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        priority_queue <int, vector<int>, greater<int> > pq;
        int n = nums.size();
        for(int i=0; i<n; i++){
            pq.push(nums[i]*nums[i]);
        }
        nums.clear();
        while(!pq.empty()){
            nums.push_back(pq.top());
            pq.pop();
        }
        return nums;
    }
};