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
int arr[N];

int32_t main()
{
	IOS;
	int t,n,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>arr[i];
		cin>>x;
		if(n < 4)
		{
			cout<<0<<endl;
			continue;
		}
		sort(arr+1,arr+n+1);
		int a = 1,b = 2,c = n-1,d = n;
		int flag = 0;
		while(a < b && b < c && c < d)
		{
			int sum = arr[a]+arr[b]+arr[c]+arr[d];
			if(sum == x)
			{
				cout<<1<<endl;
				flag = 1;
				break;
			}
			else if(sum < x)
			{
				if(b < c-1)
					b++;
				else 
					a++;
			}
			else
			{
				if(c > b+1)
					c--;
				else
					d--;
			}
		}
		if(flag)
			continue;
		else
			cout<<0<<endl;
	}


	return 0;
}