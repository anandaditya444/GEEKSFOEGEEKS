#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e4+5;
int a[N],dp[N];

int solve(int n)
{
	if(n == 1)
		return a[1];
	if(n == 2)
		return max(a[1],a[2]);
	dp[1] = a[1];
	dp[2] = max(a[1],a[2]);

	for(int i=3;i<=n;i++)
	{
		dp[i] = max(a[i]+dp[i-2],dp[i-1]);
	}
	return dp[n];
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
			cin>>a[i];
		cout<<solve(n)<<endl;
	}

	return 0;
}