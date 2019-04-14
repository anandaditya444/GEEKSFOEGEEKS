#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back

const int N = 1e3+5;
int a[N];

int32_t main()
{
	//IOS;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int cnt = 0;
		for(int i=1;i<=n;)
		{
			int profit = -1;
			int idx = 0,jdx = 0;
			for(int j=i+1;j<=n;j++)
			{
				if(profit < a[j]-a[i])
				{
					profit = a[j]-a[i];
					idx = i;
					jdx = j;
				}
				else if(profit > -1)
				{
					cout<<"("<<--idx<<" "<<--jdx<<")"<<" ";
					cnt++;
					i = j;
					break;
				}
			}
			if(jdx == n)
			{
				if(cnt > 0)
					cout<<"("<<--idx<<" "<<--jdx<<")"<<endl;
				else
					cout<<"No Profit"<<endl;
				break;
			}
		}
	}


	return 0;
}