#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 25;
int mat[N][N];

int dp(int i,int j)
{
	if(i < 1 || j < 1)
		return -1e12;
	else if(i == 1 && j == 1)
		return mat[i][j];
	return mat[i][j] + max(dp(i-1,j),max(dp(i,j-1),dp(i-1,j-1))); 
}

int32_t main()
{
	IOS;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>mat[i][j];
			}
		}
		int ans = dp(n,n);
		cout<<ans<<endl;
	}
	


	return 0;
}