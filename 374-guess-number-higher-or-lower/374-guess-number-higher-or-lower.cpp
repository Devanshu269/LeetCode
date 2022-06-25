/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int i=1, j=n;
        int mid = 0;
        while(i<=j){
            mid = i + (j-i)/2;
            int temp = guess(mid);
            if(temp == 0){
                return mid;
                break;
            }
            else if(temp == -1)
                j = mid - 1;
            else 
                i = mid + 1;
        }
        return mid;
    }
};