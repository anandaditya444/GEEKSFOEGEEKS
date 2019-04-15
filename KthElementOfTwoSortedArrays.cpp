#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e6+5;
vector<int>v;

int32_t main()
{
	IOS;
	int t,n,m,k,in;
	cin>>t;
	while(t--)
	{
		v.clear();
		cin>>n>>m>>k;
		for(int i=1;i<=n;i++)
		{
			cin>>in;
			v.pb(in);
		}
		for(int i=1;i<=m;i++)
		{
			cin>>in;
			v.pb(in);
		}
		sort(v.begin(),v.end());
		cout<<v[k-1]<<endl;
		//int ans = upper_bound(v.begin(),v.end())
	}

	


	return 0;
}