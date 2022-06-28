class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int a, b, c;
        for(int i=n-1; i>0; i--){
            a = nums[i];
            for(int j=i-1; j>0; j--){
                b = nums[j];
                c = nums[j-1];
                if(a+b>c && a+c>b && b+c>a)
                    return (a+b+c);
            }           
        }
        return 0;
    }
};