#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 55;
const int M = 55;
int dx[4] = {+1,-1,0,0};
int dy[4] = {0,0,-1,+1};
bool vis[N][M];
int t,n,m,x;
vector<vector<char> >grid;
vector<char>v;

void bfs(int i,int j)
{
	vis[i][j] = 1;
	queue<pair<int,int> >q;
	q.push({i,j});
	char val = grid[i][j];
	while(!q.empty())
	{
		auto f = q.front();
		q.pop();
		int x = f.ff;
		int y = f.ss;
		for(int dir=0;dir<4;dir++)
		{
			int nx = x + dx[dir];
			int ny = y + dy[dir];

			if(nx < 0 || nx > n-1 || ny < 0 || ny > m-1)
				continue;
			if(grid[nx][ny] != val)
				continue;
			if(!vis[nx][ny])
			{
				vis[nx][ny] = 1;
				q.push({nx,ny});
			}
		}
	}
}

int32_t main()
{
	IOS;
    cin>>t;
    while(t--)
    {
    	cin>>n>>m;
    	grid.clear();
    	v.clear();
    	memset(vis,0,sizeof(vis));
    	string s;
    	for(int i=1;i<=n;i++)
    	{
    		cin>>s;
			for(auto x:s)
				v.pb(x);
			grid.pb(v);
    		v.clear();
    	}
    	int cnt = 0;
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<m;j++)
    		{
    			if(grid[i][j] == 'X' && !vis[i][j])
    			{
    				bfs(i,j);
    				cnt++;
    			}
    		}
    	}
    	cout<<cnt<<endl;
    }
	


	return 0;
}