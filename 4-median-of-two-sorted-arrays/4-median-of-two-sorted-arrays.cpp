class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int k = n+m;
        int i=0, j=0, l=0;
        int A[k];

        while(i<n && j<m && l<k){
            if(nums1[i] < nums2[j]){
                A[l] = nums1[i];
                cout << "Nums1[i] = " << nums1[i] << endl;
                i++;
                l++;
            }else{
                A[l] = nums2[j];
                cout << "Nums2[j] = " << nums2[j] << endl;
                j++;
                l++;
            }
        }
        
        if(i != n){
            while(i != n && l<k){
                A[l] = nums1[i];
                cout << "Nums1[i] = " << nums1[i] << endl;
                i++;
                l++;
            }
        }
        if(j != m){
            while(j != m  && l<k){
                A[l] = nums2[j];
                cout << "Nums2[j] = " << nums2[j] << endl;
                j++;
                l++;
            }
        }
        for(int q=0; q<k; q++)
            cout << A[q] << " " ;
        if(k%2 == 0){
            double avg = (double)(A[k/2 - 1] + A[k/2])/2;
            return avg;
        }
        return (double)A[k/2];
    }
};