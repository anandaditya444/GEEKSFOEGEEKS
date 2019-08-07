#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

string x,y;
const int N = 1e2+5;
int memo[N][N];

int dp(int i,int j,int count)
{
	if(i == 0 || j == 0)
		return memo[i][j] = count;
	if(memo[i][j] != -1)
		return memo[i][j];
	if(x[i-1] == y[j-1])
		return memo[i][j] = dp(i-1,j-1,count+1);
	//count = 
	return memo[i][j] = max(count,max(dp(i-1,j,0),dp(i,j-1,0)));

}
int32_t main()
{
	IOS;
	int t,n,m;
	cin>>t;
	while(t--)
	{
		memset(memo,-1,sizeof(memo));
		cin>>n>>m;
		cin>>x>>y;
		int ans = dp(n,m,0);
		cout<<ans<<endl;
	}
	

	return 0;
}