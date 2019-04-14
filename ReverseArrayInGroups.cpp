#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e7+5;
int a[N];

int32_t main()
{
	IOS;
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<=n;i+=k)
		{
			int left = i;
			int right = min(i+k-1,n);

			while(left < right)
				swap(a[left++],a[right--]);
		}
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;

	}


	return 0;
}