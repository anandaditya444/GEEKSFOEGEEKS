#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back

const int N = 1e3+5;
int a[N];
//vector<pair<int,int> >v;

int32_t main()
{
	IOS;
	int t,n;
	cin>>t;
	while(t--)
	{
		//v.clear();
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			// v.pb({a[i],i});
		}
		int swaps = 0;
		for(int i=1;i<=n;i++)
		{
			if(a[i] == i)
				continue;
			swap(a[a[i]],a[i]);
			swaps++;
		}
		cout<<swaps<<endl;
	}



	return 0;
}