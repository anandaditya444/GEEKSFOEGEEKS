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
int a[N],memo[N];
int t,n;

int lis(int cur,int prev)
{
	if(cur >= n)
		return 0;
	if(memo[cur] != -1)
		return memo[cur];
	if(a[cur] > prev)
		return 1 + lis(cur+1,a[cur]);

	return lis(cur+1,prev);
}

int32_t main()
{
	IOS;
	cin>>t;
	while(t--)
	{
		memset(memo,-1,sizeof(memo));
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		int ans = lis(0,-1e12);
		cout<<ans<<endl;
	}



	return 0;
}