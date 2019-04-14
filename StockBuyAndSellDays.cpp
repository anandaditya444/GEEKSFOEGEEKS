#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back

const int N = 1e3+5;
int a[N];
int t,n;

struct ans
{
	int buy = 0;
	int sell = 0;
};
vector<ans>v;

void solve()
{
	for(int i=1;i<=n;)
	{
		ans temp;

		while(i < n && a[i+1] <= a[i])
			i++;

		if(i == n)
		{
			return;
		}

		temp.buy = i++;

		while(i <= n && a[i] >= a[i-1])
			i++;
		temp.sell = i-1;

		v.pb(temp);
	}
}

int32_t main()
{
	IOS;
	cin>>t;
	while(t--)
	{
		v.clear();
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		if(n == 1)
		{
			cout<<"No Profit"<<endl;
			continue;
		}
		solve();
		if(v.size() == 0)
		{
			cout<<"No Profit"<<endl;
			continue;
		}
		
		for(int i=0;i<v.size();i++)
		{
			cout<<"("<<--v[i].buy<<" "<<--v[i].sell<<")"<<" ";
		}
		cout<<endl;
	}



	return 0;
}