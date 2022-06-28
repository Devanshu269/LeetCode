class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int i=0, j=n-1;
        char ans = 'z';
        char temp;
        if(target >= letters[n-1])
            return letters[0];
        while(i<=j){
            int mid = i + (j-i)/2;
            if(letters[mid] == target){
                temp = letters[mid];
                i++;
            } 
            else if(letters[mid] > target){
                ans = min(ans, letters[mid]);
                j = mid-1;
            } 
            else{
                i = mid+1;
            } 
        }
        return ans;
    }
};