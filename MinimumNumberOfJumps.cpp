#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e7+5;
int a[N];
int t,n;

int dp(int cur,int* memo)
{
	if(cur == n)
		return 0;

	if(a[cur] == 0)
		return 1e12;

	if(memo[cur] != -1)
		return memo[cur];

	int ans = 1e12;

	for(int i=cur+1;i<=cur+a[cur] && i<=n;i++)
	{
		int jumps = dp(i,memo);
		if(jumps + 1 < ans)
			ans = jumps + 1;
	}

	memo[cur] = ans;
	return ans;

}

int32_t main()
{
	IOS;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int memo[n+1];
		memset(memo,-1,sizeof(memo));
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int ans = dp(1,memo);
		if(ans == 1e12)
			ans = -1;
		cout<<ans<<endl;
	}



	return 0;
}