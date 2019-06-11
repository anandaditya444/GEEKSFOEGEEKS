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
	//IOS;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int cnt = 0;
		while(n)
		{
			n = (n & (n << 1)); //https://www.geeksforgeeks.org/length-longest-consecutive-1s-binary-representation/
			cnt++;
		}
		cout<<cnt<<endl;
		// v.clear();
		// cin>>n;
		// while(n > 0)
		// {
		// 	v.pb(n%2);
		// 	n /= 2;
		// }
		// // for(auto x:v)
		// // 	cout<<x<<" ";
		// // cout<<endl;
	
		// int sz = v.size();
		// int ans = -1;
		// for(int i=1;i<sz;i++)
		// {
		// 	if(v[i])
		// 		v[i] = v[i-1] + 1;
		// 	ans = max(ans,v[i]);
		// }
		// // for(auto x:v)
		// // 	cout<<x<<" ";
		// // cout<<endl;
		// cout<<ans<<endl;
	}


	return 0;
}