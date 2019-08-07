#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e3+5;
int wt[N],val[N];
int dp[N][N];

int knapsack(int W,int idx)
{
	if(W == 0 || idx == 0)
		return dp[W][idx] = 0;
	if(dp[W][idx] != -1)
		return dp[W][idx];
	if(wt[idx] > W)
		return dp[W][idx] = knapsack(W,idx-1);
	return dp[W][idx] = max((val[idx-1] + knapsack(W-wt[idx-1],idx-1)),knapsack(W,idx-1));
}

int32_t main()
{
	IOS;
	int t,n,W;
	cin>>t;
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		cin>>n>>W;
		for(int i=0;i<n;i++)
			cin>>val[i];
		for(int i=0;i<n;i++)
			cin>>wt[i];
		int ans = knapsack(W,n-1);
		cout<<ans<<endl; 
	}
	


	return 0;
}