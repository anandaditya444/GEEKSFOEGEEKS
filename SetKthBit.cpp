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
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int ans = n | (1 << k);
		cout<<ans<<endl;
	}



	return 0;
}