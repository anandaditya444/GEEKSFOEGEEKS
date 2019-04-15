#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e7+5;
int a[N];
map<int,int>m;

int32_t main()
{
	IOS;
	int t,n,in;
	cin>>t;
	while(t--)
	{
		cin>>n;
		m.clear();
		for(int i=1;i<=n;i++)
		{
			cin>>in;
			m[in]++;
		}
		for(int i=1;i<=n;i++)
		{
			cin>>in;
			m[in]--;
		}
		int flag = 0;
		for(auto x:m)
		{
			if(x.ss != 0)
			{
				cout<<0<<endl;
				flag = 1;
				break;
			}
		}
		if(!flag)
			cout<<1<<endl;

	}
	return 0;
}