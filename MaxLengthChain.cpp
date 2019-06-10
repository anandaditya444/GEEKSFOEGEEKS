#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

vector<pair<int,int> >v;

bool comp(pair<int,int>&a,pair<int,int>&b)
{
	if(a.ss < b.ff)
		return a.ss < b.ff;
}

int32_t main()
{
	IOS;
	int t,n,x,y;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[2*n];
		for(int i=0;i<2*n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<2*n;i+=2)
		{
			v.emplace_back(a[i-1],a[i]);
		}
		// for(auto x:v)
		// 	cout<<x.ff<<" "<<x.ss<<endl;
		int cnt = 0;
		//sort(v.begin(),v.end(),comp);

		// for(int i=0;i<n;i++)
		// 	cout<<v[i].ff<<' '<<v[i].ss<<endl;
		int cur = v[0].ss;
		for(int i=1;i<n;i++)
		{
			if(v[i].ff > cur)
			{
				cur = v[i].ss;
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}



	return 0;
}