class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>ans;
        int n=prerequisites.size();
        vector<int>indeg(numCourses,0);
        for (int i=0;i<n;i++){
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            indeg[u]++;
            adj[v].push_back(u);
        }
        queue<int>q;
        for (int i=0;i<numCourses;i++){
           if (indeg[i]==0){
               q.push(i);
           }
        }
        while(!q.empty()){
            int node=q.front();
            ans.push_back(node);
            q.pop();
            int s=adj[node].size();
            for (int i=0;i<s;i++){
                indeg[adj[node][i]]--;
                if (indeg[adj[node][i]]==0) q.push(adj[node][i]);
            }
        }
        if (ans.size()==numCourses) return ans;
        return vector<int>();
    }
};