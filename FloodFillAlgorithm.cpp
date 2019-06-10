#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

int t,n,m,x,y,k,temp;
int mat[100][100];

void solve(int x,int y)
{
	if(x < 0 || y < 0 || x > n || y > m)
		return;
	mat[x][y] = k;

	if(mat[x-1][y] == temp)
		solve(x-1,y);
	if(mat[x][y-1] == temp)
		solve(x,y-1);
	if(mat[x+1][y] == temp)
		solve(x+1,y);
	if(mat[x][y+1] == temp)
		solve(x,y+1);
}

int32_t main()
{
	IOS;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int a[n*m];
		for(int i=0;i<n*m;i++)
			cin>>a[i];
		int pos = 0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				mat[i][j] = a[pos++];
			}
		}

		cin>>x>>y>>k;
		temp = mat[x][y];
		mat[x][y] = k;
		solve(x,y);

	    for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<mat[i][j]<<" ";
			}
		}
		cout<<endl;

	}


	return 0;
}