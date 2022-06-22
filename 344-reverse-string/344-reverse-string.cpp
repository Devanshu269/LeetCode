class Solution {
public:
    void revString(vector<char>& arr, int n, int i){
        if(i >= n/2)
            return;
        swap(arr[i], arr[n-i-1]);
        revString(arr, n, i+1);
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        revString(s, n, 0);
    }
};