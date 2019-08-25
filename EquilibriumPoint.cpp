#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e6+5;
int a[N],cur[N];

int32_t main()
{
	IOS;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			cur[i] = a[i];
		}
		for(int i=2;i<=n;i++)
			cur[i] += cur[i-1];
		int sum = 0,flag = 0;
		for(int i=n;i>=1;i--)
		{
			sum += a[i];
			if(sum == cur[i])
			{
				cout<<i<<endl;
				flag = 1;
				break;
			}
		}
		if(flag)
			continue;
		cout<<-1<<endl;
	}
	


	return 0;
}