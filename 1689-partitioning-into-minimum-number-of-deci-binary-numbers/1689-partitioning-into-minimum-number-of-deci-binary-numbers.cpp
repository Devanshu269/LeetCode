class Solution {
public:
    int minPartitions(string n) {
        int size = n.length();
        int maxi = INT_MIN;
        for(int i=0; i<size; i++){
            maxi = max(maxi, (n[i] - '0'));
        }
        return maxi;
    }
};