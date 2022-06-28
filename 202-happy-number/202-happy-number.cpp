class Solution {
public:
    bool isHappy(int n) {
		if(n == 1)
			return true;
        unordered_set<int> sums; //Hash Set to store unique sums. 
        while(n != 1){
            if(sums.count(n) == 0)
                sums.insert(n);
            else 
                return false;
            int sum = 0; 
            while(n != 0){
                sum += pow(n%10, 2); //Calculate sum of digits' squares.
                n = n/10;
            }
            n = sum; //Update number value.  
        }
        //n=1
        return true;
    }
};