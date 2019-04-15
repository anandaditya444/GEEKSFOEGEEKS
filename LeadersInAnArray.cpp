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

int32_t main()
{
	IOS;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int cur_max = -1;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		cout<<a[n]<<" ";
		for(int i=n-1;i>=1;i--)
		{
			cur_max = max(a[i],cur_max);
			if(a[i] >= cur_max)
				cout<<a[i]<<" ";
		}
		cout<<endl;
	}


	return 0;
}