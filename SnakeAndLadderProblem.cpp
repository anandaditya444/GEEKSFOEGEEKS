The idea is to consider the given snake and ladder board as a directed graph with number of vertices equal 
to the number of cells in the board. The problem reduces to finding the shortest path in a graph. Every vertex 
of the graph has an edge to next six vertices if next 6 vertices do not have a snake or ladder. If any of the 
next six vertices has a snake or ladder, then the edge from current vertex goes to the top of the ladder or 
tail of the snake. Since all edges are of equal weight, we can efficiently find shortest path using 
Breadth First Search of the graph. 

https://www.geeksforgeeks.org/snake-ladder-problem-2/

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 30;
int t,n,a,b;
int vis[N],moves[N];

int solve()
{
	memset(vis,0,sizeof(vis));
	queue<pair<int,int> >q;
	q.push({0,0});
	vis[0] = 1;
	pair<int,int>temp;
	while(!q.empty())
	{
		temp = q.front();
		q.pop();
		int v = temp.ff;
		if(v == N-1)
			break;
		int dist = temp.ss;
		for(int j=v+1;j<=v+6 && j<N;j++)
		{
			if(!vis[j])
			{
				pair<int,int>flag;
				flag.ss = dist+1;
				vis[j] = 1;
				if(moves[j] != -1)
					flag.ff = moves[j];
				else
					flag.ff = j;
				q.push(flag);
			}
		}
	}
	return temp.ss;
}

int32_t main()
{
	IOS;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<N;i++)
			moves[i] = -1;
		for(int i=1;i<=n;i++)
		{
			cin>>a>>b;
			moves[a] = b;
		}
		cout<<solve()<<endl;
	}
	


	return 0;
}

