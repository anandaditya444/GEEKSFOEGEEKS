#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define endl "\n"

vector<int>v;

int32_t main()
{
	IOS;
	int t,n,l,r;
	cin>>t;
	while(t--)
	{
		v.clear();
		cin>>n>>l>>r;

		int ans = ((1<<r)-1) ^ ((1<<(l-1))-1);
		cout<<(ans^n)<<endl;
		// while(n > 0)
		// {
		// 	v.pb(n%2);
		// 	n /= 2;
		// }
			
		// n = v.size()-1;
		// for(int i=l;i<=r;i++)
		// {
		// 	if(v[n-i])
		// 		v[n-i] = 0;
		// 	else
		// 		v[n-i] = 1;
		// }
		
		// int ans = 0;
		// for(int i=n;i>=0;i--)
		// {
		// 	ans += (v[n-i] * (1 << (n-i)));
		// }
		// cout<<ans<<endl;
	}



	return 0;
}