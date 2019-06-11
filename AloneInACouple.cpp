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
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int ans = a[0];
		for(int i=1;i<n;i++)
		{
			ans ^= a[i];
		}
		cout<<ans<<endl;
	}


	return 0;
}