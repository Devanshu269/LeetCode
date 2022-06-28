class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int a, b, c;
        for(int i=n-1; i>1; i--){
            a = nums[i];
            b = nums[i-1];
            c = nums[i-2];
            if(a+b>c && a+c>b && b+c>a)
                  return (a+b+c);
//             for(int j=i-1; j>0; j--){
                
//             }           
        }
        return 0;
    }
};