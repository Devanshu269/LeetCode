class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int n = arr1.size();
        int m = arr2.size();
        int count=0;
        for(int i=0; i<n; i++){
            int low=0, high = m-1;
            int target = arr1[i];
            int flag = 0;
            if(target <= arr2[0]){
                if(abs(arr1[i] - arr2[0]) > d){
                    count++;
                }
                flag = 1;
            }
            else if(target > arr2[m-1]){
                if(abs(arr1[i] - arr2[m-1]) > d){
                    count++;
                }
                flag = 1;
            }
            else{
                while(low<=high){
                int mid = low + (high-low)/2 ;
                if(arr2[mid] == target){
                    flag = 1;
                    break;
                }    
                if(arr2[mid] < target)
                    low = mid + 1;
                else
                    high = mid - 1;
                }
            }
            if(flag == 1)
                continue;
            else{
                int a = abs(arr1[i] - arr2[low]);
                int b = abs(arr1[i] - arr2[low-1]);
                if(min(a,b) > d)
                    count++;
            }
        }
        return count;
    }
};