class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1)
            return true;
        double i=1, j=num;
        while(i<=j){
            double mid = (int)i + ((int)j-(int)i)/2;
            cout << "mid = " << mid << endl;
            double a = mid*mid; 
            if(a == num)
                return true;
            else if(a < num)
                i = mid+1;
            else 
                j = mid-1;
        }
        return false;
    }
};