#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

string s1,s2;
const int N = 1e2+5;
int memo[N][N];

int lcs(int m,int n)
{
	if(m == 0 || n == 0)
		return 0;
	if(memo[m][n] != -1)
		return memo[m][n];
	if(s1[m-1] == s2[n-1])
		return memo[m][n] = 1 + lcs(m-1,n-1);

	return memo[m][n] = max(lcs(m-1,n),lcs(m,n-1));

}

int32_t main()
{
	IOS;
	int t,m,n;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		cin>>s1>>s2;
		memset(memo,-1,sizeof(memo));

		int ans = lcs(m,n);
		cout<<ans<<endl;
	}


	return 0;
}