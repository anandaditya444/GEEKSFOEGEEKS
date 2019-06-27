We do a DFS traversal of the given graph. For every visited vertex ‘v’, if there is an adjacent ‘u’ such that u 
is already visited and u is not parent of v, then there is a cycle in graph. If we don’t find such an adjacent 
for any vertex, we say that there is no cycle. The assumption of this approach is that there are no parallel edges 
between any two vertices.



/*This is a function problem.You only need to complete the function given below*/
/* This function is used to detect a cycle in undirected graph
*  adj[]: array of vectors to represent graph
*  V: number of vertices
*/
const int N = 1e2+5;
int vis[N];

bool checkCyclic(vector<int> adj[],int u,int parent)
{
    vis[u] = 1;
    for(auto x:adj[u])
    {
        if(!vis[x])
        {
            if(checkCyclic(adj,x,u))
            {
                return true;
            }
        }
        else
        {
            if(x != parent)
            {
                return true;
            }
        }
    }
    return false;
}

bool isCyclic(vector<int> adj[], int V)
{
    memset(vis,0,sizeof(vis));
   for(int u=0;u<V;u++)
   {
       if(!vis[u])
       {
           if(checkCyclic(adj,u,-1))
           {
               return true;
           }
       }
   }
   return false;
}