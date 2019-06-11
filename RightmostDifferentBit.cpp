#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define endl "\n"


int32_t main()
{
	IOS;
	int t,m,n;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		int val = m ^ n; //taking xor will set those bits where values in the two numbers are different.
		int ans = log2(val & -val) + 1;
		cout<<ans<<endl;

	}

	return 0;
}