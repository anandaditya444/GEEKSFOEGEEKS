#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

int solve(int n)
{
	if(n == 1)
		return 1;
	return n + solve(n-1);
}

int32_t main()
{
	IOS;
	int n;
	cin>>n;
	cout<<solve(n)<<endl;
	// int ans = n*(n+1)/2;
	// cout<<ans<<endl;
	return 0;
}