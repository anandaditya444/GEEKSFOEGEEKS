#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front

const int N = 1e2+5;
int a[N],pref[N],dp[N][N];
pair<int,int>mat[N][N];

//Recursive way Link
//https://ideone.com/8ufQnf

int solve(int i,int j)
{
	if(i == j)
		return a[i];
	if(j == i+1)
		return max(a[i],a[j]);
	if(dp[i][j] != -1)
		return dp[i][j];

	return dp[i][j] = max(a[i]+min(solve(i+2,j),solve(i+1,j-1)),a[j]+min(solve(i,j-2),solve(i+1,j-1)));
}

int32_t main()
{
	IOS;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;

		memset(dp,-1,sizeof(dp));
		for(int i=1;i<=n;i++)
			cin>>a[i];
		cout<<solve(1,n)<<endl;
		// memset(pref,0,sizeof(pref));
		// memset(mat,0,sizeof(mat));
		// for(int i=1;i<=n;i++)
		// {
		// 	cin>>a[i];
		// 	pref[i] += (a[i]+pref[i-1]);
		// }
	
		// for(int i=1;i<=n;i++)
		// 	mat[0][i].ff = i;
		// for(int i=1;i<=n;i++)
		// 	mat[i][0].ff = i;

		// for(int i=1;i<=n;i++)
		// {
		// 	for(int j=i;j<=n;j++)
		// 	{
		// 		if(i == j)
		// 		{
		// 			mat[i][j].ff = a[i-1];
		// 			mat[i][j].ss = 0;
		// 		}
		// 		else
		// 		{
		// 			mat[i][j].ff = max(a[i]+mat[i+1][j].ss,a[j]+mat[i][j-1].ss);
		// 			mat[i][j].ss = pref[j]-mat[i][j].ff;
		// 		}
		// 	}
		// }
		// cout<<mat[1][n].ff<<endl;
	}



	return 0;
}