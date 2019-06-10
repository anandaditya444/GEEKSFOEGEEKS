#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

//Dynamic Programming Approach
//Time Complexity is O(nk^2)
//Space complexity is O(nk)

int solve_dp(int n,int k)
{
	int dp[n+1][k+1];

	for(int i=1;i<=k;i++)
	{
		dp[1][i] = i;
	}
	for(int i=1;i<=n;i++)
	{
		dp[i][0] = 0;
		dp[i][1] = 1;
	}

	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=k;j++)
		{
			dp[i][j] = INT_MAX;
			for(int x=1;x<=j;x++)
			{
				//dp[i][j] = min(dp[i][j],max(dp[i-1][x-1],dp[i][j-x])+1);
				int res = 1 + max(dp[i-1][x-1],dp[i][j-x]);
				if(res < dp[i][j])
					dp[i][j] = res;
			}
		}
	}

	return dp[n][k];
}


int32_t main()
{
	IOS;
	int n,t,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cout<<solve_dp(n,k)<<endl;
	}

	return 0;
}