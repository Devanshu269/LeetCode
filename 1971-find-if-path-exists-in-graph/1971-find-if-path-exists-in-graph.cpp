class Solution {
public:
    vector<int> graph[200001];
    int DFS(int src, int dest, vector<bool> &vis) {
    if (src == dest)
        return true;
    vis[src] = true;
    for (int child: graph[src]) {
        if (!vis[child]) {
            if (DFS(child, dest, vis))
                return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        for (int i = 0; i < 200001; i++)
            graph[i]. clear();
        for (int i = 0; i < edges.size(); i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> vis(n, false);
        return DFS(source, destination, vis);
    }
};