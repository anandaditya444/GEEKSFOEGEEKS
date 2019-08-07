#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"
#define INF 1e7

const int V = 1e2+5;
int mat[V][V];

int32_t main()
{
	IOS;
	int t,v;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>v;
		for(int i=1;i<=v;i++)
		{
			for(int j=1;j<=v;j++)
			{
				cin>>s;
				if(s == "INF")
					mat[i][j] = INF;
				else
				{
					int cur = stoi(s);
					mat[i][j] = cur;
				}
			}
		}
		for(int k=1;k<=v;k++)
		{
			for(int i=1;i<=v;i++)
			{
				for(int j=1;j<=v;j++)
				{
					mat[i][j] = min(mat[i][j],mat[i][k] + mat[k][j]);
				}
			}
		}
		for(int i=1;i<=v;i++)
		{
			for(int j=1;j<=v;j++)
			{
				if(mat[i][j] >= INF)
					cout<<"INF"<<" ";
				else
					cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
	}


	


	return 0;
}