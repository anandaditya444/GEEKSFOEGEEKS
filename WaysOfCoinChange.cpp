#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

int memo[1005][1005];

int dp(int* a,int m,int n)
{
    if(n == 0)
        return memo[m][n] = 1;
    if(n < 0 || m <= 0)
        return memo[m][n] = 0;
    if(memo[m][n] != -1)
        return memo[m][n];
    return memo[m][n] = dp(a,m,n-a[m-1]) + dp(a,m-1,n);
}

int32_t main()
{
	IOS;
	int t,n,m;
    cin>>t;
	while(t--)
	{
		cin>>m;
		int a[m];
		for(int i=0;i<m;i++)
			cin>>a[i];
		cin>>n;
		//int memo[m][n];
		memset(memo,-1,sizeof(memo));
		int ans = dp(a,m,n);
		cout<<ans<<endl;
	}
	


	return 0;
}