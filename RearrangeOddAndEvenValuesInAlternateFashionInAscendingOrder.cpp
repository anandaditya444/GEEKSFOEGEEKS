#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"


int32_t main()
{
	IOS;
	int n;
	cin>>n;
	int a[n+1];
	vector<int>odd,even;
	int mn = 1e12;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]&1)
			odd.pb(a[i]);
		else
			even.pb(a[i]);
		mn = min(mn,a[i]);
	}
	sort(odd.begin(),odd.end());
	sort(even.begin(),even.end());
	if(mn&1)
	{
		int i = 1,j = 0;
		while(i <= n && j < odd.size())
		{
			a[i] = odd[j];
			i += 2;
			j++;
		}
		i = 2,j = 0;
		while(i <= n && j < even.size())
		{
			a[i] = even[j];
			i += 2;
			j++;
		}
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	else
	{
		int i = 1,j = 0;
		while(i <= n && j < even.size())
		{
			a[i] = even[j];
			i += 2;
			j++;
		}
		i = 2,j = 0;
		while(i <= n && j < odd.size())
		{
			a[i] = odd[j];
			i += 2;
			j++;
		}
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}





	return 0;
}