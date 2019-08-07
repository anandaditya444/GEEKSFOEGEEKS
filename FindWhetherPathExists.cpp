#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

vector<vector<int> >grid;
vector<int>v;
int t,n,x;

bool pathExists(int i,int j)
{
	if(i < 0 || i > n-1 || j < 0 || j > n-1 || grid[i][j] == 0)
		return false;
	if(grid[i][j] == 2)
		return true;
	if(pathExists(i+1,j) || pathExists(i-1,j) || pathExists(i,j+1) || pathExists(i,j-1))
		return true;
	return false;
}

int32_t main()
{
	//IOS;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>x;
				v.pb(x);
			}
			grid.pb(v);
			v.clear();
		}
		//cout<<"asd"<<endl;
		for(auto x:grid)
		{
			for(auto c:x)
			{
				cout<<c<<" ";
			}
			cout<<endl;
		}
		int flag = 0;
		int sdx,sdy;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(grid[i][j] == 1)
				{
					sdx = i;
					sdy = j;
					flag = 1;
					break;
				}
				// if(grid[i][j] == 2)
				// {
				// 	ddx = i;
				// 	ddy = j;
				// }
			}
			if(flag)
				break;
		}
		if(pathExists(sdx,sdy))
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}
	


	return 0;
}