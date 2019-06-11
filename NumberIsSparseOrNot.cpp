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
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n & (n >> 1))  //https://www.geeksforgeeks.org/check-if-a-given-number-is-sparse-or-not/
			cout<<0<<endl;
		else
			cout<<1<<endl;
		// v.clear();
		// cin>>n;
		// while(n)
		// {
		// 	v.pb(n%2);
		// 	n /= 2;
		// }
		// int sz = v.size();
		// int flag = 0;
		// for(int i=1;i<sz;i++)
		// {
		// 	if(v[i] && v[i-1])
		// 	{
		// 		flag = 1;
		// 		break;
		// 	}
		// }
		// if(flag)
		// 	cout<<0<<endl;
		// else
		// 	cout<<1<<endl;
	}



	return 0;
}