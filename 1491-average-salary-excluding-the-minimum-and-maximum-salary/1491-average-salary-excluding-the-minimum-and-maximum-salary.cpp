class Solution {
public:
    double average(vector<int>& salary) {
        double mod = 1e9 + 7;
        int n = salary.size();
        cout << " N = " << n << endl;
        int maxi = INT_MIN, mini = INT_MAX;
        for(int i=0; i<n; i++){
            maxi = max(maxi, salary[i]);
            mini = min(mini, salary[i]);
        }
        cout << "maxi = " << maxi << " mini = " << mini << endl;
        int sum = 0;
        for(int i=0; i<n; i++){
            if(salary[i] != maxi && salary[i] != mini){
                sum += salary[i];
                cout << "sum " << sum << endl;
            }
        }
        double avg = ((double)sum/(n-2));
        return avg;
    }
};