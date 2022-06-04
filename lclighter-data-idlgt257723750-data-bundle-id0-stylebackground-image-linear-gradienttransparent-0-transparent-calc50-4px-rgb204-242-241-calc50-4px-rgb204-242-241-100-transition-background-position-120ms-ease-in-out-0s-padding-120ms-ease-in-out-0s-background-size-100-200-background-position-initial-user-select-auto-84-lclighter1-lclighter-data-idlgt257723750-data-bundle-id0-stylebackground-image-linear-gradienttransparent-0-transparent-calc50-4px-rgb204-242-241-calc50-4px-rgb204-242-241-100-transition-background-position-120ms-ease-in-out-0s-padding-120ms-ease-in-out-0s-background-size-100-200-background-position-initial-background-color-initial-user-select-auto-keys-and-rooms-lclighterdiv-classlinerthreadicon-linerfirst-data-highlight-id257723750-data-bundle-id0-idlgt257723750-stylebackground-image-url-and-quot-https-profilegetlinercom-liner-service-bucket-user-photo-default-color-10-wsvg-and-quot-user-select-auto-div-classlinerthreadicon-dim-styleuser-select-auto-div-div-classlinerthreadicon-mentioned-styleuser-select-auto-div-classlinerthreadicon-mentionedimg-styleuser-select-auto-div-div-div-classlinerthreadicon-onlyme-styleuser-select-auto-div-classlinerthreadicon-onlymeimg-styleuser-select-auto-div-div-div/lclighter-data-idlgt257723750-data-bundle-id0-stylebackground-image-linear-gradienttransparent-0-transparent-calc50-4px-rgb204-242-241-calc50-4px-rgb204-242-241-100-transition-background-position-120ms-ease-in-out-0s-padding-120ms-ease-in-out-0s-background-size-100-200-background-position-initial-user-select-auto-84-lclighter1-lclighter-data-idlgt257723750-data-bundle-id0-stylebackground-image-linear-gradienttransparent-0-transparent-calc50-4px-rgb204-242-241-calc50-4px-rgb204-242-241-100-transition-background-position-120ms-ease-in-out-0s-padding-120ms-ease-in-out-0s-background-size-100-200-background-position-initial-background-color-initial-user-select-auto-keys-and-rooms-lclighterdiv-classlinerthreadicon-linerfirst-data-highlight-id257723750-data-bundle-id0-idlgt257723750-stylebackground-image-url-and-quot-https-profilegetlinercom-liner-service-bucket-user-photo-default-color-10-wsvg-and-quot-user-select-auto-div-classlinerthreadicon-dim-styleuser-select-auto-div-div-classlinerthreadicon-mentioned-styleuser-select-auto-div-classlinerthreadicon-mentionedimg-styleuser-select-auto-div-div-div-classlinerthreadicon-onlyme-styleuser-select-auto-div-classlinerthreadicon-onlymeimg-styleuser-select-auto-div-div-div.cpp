class Solution {
public:
    void dfs(int i, vector<int> &vis,vector<vector<int>>& rooms, int &c){
        if(vis[i] == 1)
            return;
        vis[i] = 1;
        c++;
        for(auto x: rooms[i]){
            if(vis[x] != 1)
                dfs(x, vis, rooms, c);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> vis(n, 0);
        int c=0;
        dfs(0, vis, rooms, c);
        if(n==c)
            return true;
        else
            return false;
        
    }
};