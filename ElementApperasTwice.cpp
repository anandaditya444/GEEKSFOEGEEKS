#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e7+1;
int a[N];

int32_t main()
{
	IOS;
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(int i=1;i<=n;i++)
	        cin>>a[i];
	  	int ans = a[1];
	    for(int i=2;i<=n;i++)
	        ans ^= a[i];
	    cout<<ans<<endl;
	}

	
	return 0;
}