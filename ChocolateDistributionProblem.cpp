#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back

const int N = 1e7+5;
int a[N];
int t,n,m;

int solve(deque<int>&q)
{
	int i;
	for(i=1;i<=m;i++)
	{
		q.pb(a[i]);
	}
	int diff = q.back()-q.front();
	q.pop_front();

	for(;i<=n;i++)
	{
		q.pb(a[i]);
		diff = min(diff,q.back()-q.front());
		q.pop_front();
	}
	return diff;
}

int32_t main()
{
	IOS;
	cin>>t;
	while(t--)
	{
		deque<int>q;
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		sort(a+1,a+n+1);
		cin>>m;
		cout<<solve(q)<<endl;;
	}

	return 0;
}