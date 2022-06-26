class Solution {
public:
    void rev(vector<int>& A, int i, int j){
        while(i<j){
            swap(A[i], A[j]);
            i++, j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        rev(nums, 0, n-1);
        rev(nums, 0, k-1);
        rev(nums, k, n-1);
    }
};