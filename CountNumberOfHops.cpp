#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

int32_t main()
{
	IOS;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int dp[n+1];
		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;

		for(int i=4;i<=n;i++)
			dp[i] = dp[i-1]+dp[i-2]+dp[i-3];

		cout<<dp[n]<<endl; 
	}


	return 0;
}