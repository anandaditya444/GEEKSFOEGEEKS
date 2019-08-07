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
int a[N],reqd[N];
int t,n;

int32_t main()
{
	IOS;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			reqd[i] = a[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[i] > a[j])
				{
					reqd[i] = max(reqd[i],reqd[j]+a[i]);
				}
			}
		}
		cout<<*max_element(reqd,reqd+n)<<endl;
	}
	


	return 0;
}