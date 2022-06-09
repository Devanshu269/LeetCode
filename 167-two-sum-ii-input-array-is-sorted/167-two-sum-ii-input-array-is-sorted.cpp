class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> ans;
        int i=0, j=n-1;
        if(n == 2){
            if((numbers[i] + numbers[j]) == target){
                ans.push_back(1);
                ans.push_back(2);
                return ans;
            }
            
        }
        while(i<n && j>= 0){
            int temp = target - numbers[i];
            if(numbers[j] == temp){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            if(temp < numbers[j])  
                j--;
            else
                i++;
        }
        return ans;
    }
};