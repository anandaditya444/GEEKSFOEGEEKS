#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back

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
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			a[i] *= a[i];
		}
		sort(a+1,a+n+1);
		int flag = 0;
		for(int i=n;i>=1;i--)
		{
			int l = 1;
			int r = i-1;

			while(l < r)
			{	
				int sum = a[l]+a[r];
				if(sum == a[i])
				{
					cout<<"Yes"<<endl;
					flag = 1;
					break;
				}
				else if(sum < a[i])
					l++;
				else
					r--;
			}
			if(flag)
				break;
		}
		if(!flag)
			cout<<"No"<<endl;
	}


	return 0;
}