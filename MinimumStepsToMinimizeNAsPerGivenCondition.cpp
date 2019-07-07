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
int memo[N];

int go(int n)
{
	if(n == 1)
		return memo[n] = 0;
	if(memo[n] != -1)
		return memo[n];
	int res = go(n-1);

	if(n % 2 == 0)
		res = min(res,go(n/2));
	if(n % 3 == 0)
		res = min(res,go(n/3));

	return memo[n] = 1 + res;
}

int32_t main()
{
	IOS;
 	int t,n;
 	cin>>t;
 	while(t--)
 	{
 		memset(memo,-1,sizeof(memo));
 		cin>>n;
 		cout<<go(n)<<endl;
 	}   
	


	return 0;
}