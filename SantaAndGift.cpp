#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define endl "\n"

int32_t main()
{
	IOS;
	int t,n,m,x,p,q;
	cin>>t;
	while(t--)
	{
		cin>>n;
	    int ans = -1;
		priority_queue<int,vector<int>,greater<int>>pq;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			pq.push(x);
			ans = max(ans,x);
		}
		cin>>m;
		while(pq.size() > m)
		{
		
			p = pq.top();
			pq.pop();
			q = pq.top();
			pq.pop();
			int no = p+q;
			pq.push(no);
			ans = max(ans,no);

		}
		
		cout<<ans<<endl;
	}

	return 0;
}