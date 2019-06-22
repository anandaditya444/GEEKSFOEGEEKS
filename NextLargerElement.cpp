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
unordered_map<int,int>m;

int32_t main()
{
	IOS;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		stack<int>s;
		m.clear();
		s.push(a[1]);
		for(int i=2;i<=n;i++)
		{
			if(s.empty())
			{
				s.push(a[i]);
				continue;
			}
			if(a[i] > s.top())
			{
				while(!s.empty() && a[i] > s.top())
				{
					m[s.top()] = a[i];
					s.pop();
				}
			}
			s.push(a[i]);
		}
		for(int i=1;i<=n;i++)
		{
			if(m[a[i]] == 0)
				cout<<"-1"<<" ";
			else
				cout<<m[a[i]]<<" ";
		}
		cout<<endl;

	}
	


	return 0;
}