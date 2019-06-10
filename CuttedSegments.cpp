#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

int x,y,z;

int dp(int len,int* memo)
{
	if(len == 0)
		return 0;
	if(len < 0)
		return -1e12;
	if(memo[len] != -1)
		return memo[len];
	int ans = -1e12;

	int cur = max(dp(len-x,memo),max(dp(len-y,memo),dp(len-z,memo)));

	if(cur+1 > ans)
		ans = cur+1;

	memo[len] = ans;

	return ans;
}

int32_t main()
{
	IOS;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>x>>y>>z;
		int memo[n+1];
		memset(memo,-1,sizeof(memo));
		int ans = dp(n,memo);
		cout<<ans<<endl;
	}

	return 0;
}