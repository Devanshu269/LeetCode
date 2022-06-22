class Solution {
public:
    int BinarySearch(vector<int> A, int n, int s, int e, int target){
        if(s>e)
            return -1;
        int mid = s + (e-s)/2;
        if(A[mid] == target)
            return mid;
        if(A[mid] < target)
            s = mid+1;
        else
            e = mid-1;
        return BinarySearch(A, n, s, e, target);
    } 
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int Sindex = 0;
        int Eindex = n-1;
        return BinarySearch(nums, n, Sindex, Eindex, target);
        
    }
};