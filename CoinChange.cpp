#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

int t,m,n;

int dp(int* a)
{
	vector<int>dp(n+1,-1);
	dp[0] = 0;
	for(int i=1;i<=n;i++)
	{
		for(int x=0;x<m;x++)
		{
			if(i-a[x] >= 0 && dp[i-a[x]] != -1)
				dp[i] = dp[i] > 0 ? min(dp[i-a[x]] + 1,dp[i]) : dp[i-a[x]] + 1;
		}
	}
	return dp[n];
}

int32_t main()
{
	IOS;
	cin>>t;
	while(t--)
	{
		cin>>m;
		int a[m];
		for(int i=0;i<m;i++)
			cin>>a[i];
		cin>>n;
		int ans = dp(a);
		cout<<ans<<endl;
	}


	return 0;
}