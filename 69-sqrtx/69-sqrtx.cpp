class Solution {
public:
    int mySqrt(int x) {
        double i=0, j=x; 
        double ans = INT_MIN;
        while(i<=j){                             
            double mid = round(i + (j-i)/2);
            cout<< "mid = " << mid << endl;
            double temp = (mid*mid);
            if(temp == x){
                ans = mid;
                break;
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