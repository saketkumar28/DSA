class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=prerequisites.size();
        vector<vector<int>>adj(numCourses);
        vector<int>ans;
        vector<int>indeg(numCourses,0);
        for (int i=0;i<n;i++){
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            indeg[v]++;
            adj[u].push_back(v);
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
        return ans.size()==numCourses;
    }
};