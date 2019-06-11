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
		int ans = 0;
		while(n > 0)
		{
			ans += (n & 1); //add 1 if last bit is 1.
			n >>= 1; //right shift number by 1 bit.
		}
		cout<<ans<<endl;
	}


	return 0;
}