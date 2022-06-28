class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;
        long long i=0, j=x/2; 
        long long ans = INT_MIN;
        while(i<=j){                             
            long mid = round(i + (j-i)/2);
            // cout<< "mid = " << mid << endl;
            long temp = (mid*mid);
            if(temp == x){
                return mid;
            }
            else if(temp < x){
                if(ans < mid){
                    ans = mid;
                }
                i = mid+1;
            }else{  
                j = mid-1;
            }
        }
        // if(x%2 == 0)
        //     return (int)round(ans);
        return (int)ans;
    }
};