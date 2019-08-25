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
	int t,n;
	multiset<char>s;
	//char x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		s.clear();
		char a[n+1];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<=n;i++)
		{
			//cin>>x;
			int flag = 0;
			// if(s.empty())
			// {
			// 	cout<<x<<" ";
			// 	continue;
			// }
			s.insert(a[i]);
			for(int i=1;i<=n;i++)
			{
				if(s.count(a[i]) == 1)
				{
					flag = 1;
					cout<<a[i]<<" ";
					break;
				}
			}
			if(flag == 0)
				cout<<-1<<" ";
		}
		cout<<endl;
	}


	return 0;
}
