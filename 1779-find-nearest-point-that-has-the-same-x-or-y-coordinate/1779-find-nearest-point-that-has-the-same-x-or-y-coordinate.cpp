class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n = points.size(), m = points[0].size(); //alwyas m = 2;
        int ans = -1;
        int dis = INT_MAX;
        for(int i=0;i<n;i++){
            if(points[i][0]== x || points[i][1]==y){
                int md= abs(points[i][0] - x) + abs(points[i][1] - y);
                if(md < dis){
                    dis = md;
                    ans= i;
                }
            }
        }
    return ans;
    }
};