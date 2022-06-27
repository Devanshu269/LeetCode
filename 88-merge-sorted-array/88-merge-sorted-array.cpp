class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        vector<int> temp;
        while(i<m && j<n){
            // if(nums1[i] == 0)
            //     i++;
            // if(nums2[j] == 0)
            //     j++;
            if(nums1[i] < nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }else{
                temp.push_back(nums2[j]);
                j++;
            }
        }
        if(i != m){
            while(i != m){
                temp.push_back(nums1[i]);
                i++;
            }
        }
        if(j != n){
            while(j != n){
                temp.push_back(nums2[j]);
                j++;
            }
        }
        nums1.clear();
        for(int i=0; i<m; i++){
            cout << " " << nums1[i] << " " ;
        }
        cout << endl;
        for(int i=0; i<(n+m); i++){
            cout << " " << temp[i] << " " ;
        }
        nums1 = temp;
    }
};