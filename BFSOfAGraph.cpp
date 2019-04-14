/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* You have to complete this function*/
void bfs(int s,vector<int> adj[],bool vis[])
{
    queue<int>q;
    q.push(s);
    vis[s] = true;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(auto x:adj[node])
        {
            if(!vis[x])
            {
                q.push(x);
                vis[x] = true;
            }
        }
    }
    
}
