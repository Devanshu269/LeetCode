class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> ans;
        int i=0, j=n-1;
        if(n == 2){
            if((numbers[i] + numbers[j]) == target){
                return vector<int>{1,2};
            }else{
                return vector<int>{}; //target not found
            }
            
        }
        while(i<j){
            int temp = target - numbers[i];
            if(numbers[j] == temp){
                return vector<int>{i+1,j+1};
            }
            if(temp < numbers[j])  
                j--;
            else
                i++;
        }
        return vector<int>{}; //target not found
    }
};