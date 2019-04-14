#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e7;
int a[N],ans[N];

int32_t main()
{
	IOS;
	int t,n,s;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		for(int i=0;i<n;i++)
			cin>>a[i];
		int start = 0;
		ans[0] = a[0];
		int idx = -1;
		for(int i=1;i<n;i++)
		{
			ans[i] += a[i]+ans[i-1];
		    if(ans[i] > s)
			{
				ans[i] -= a[start];
				start++;
			}
			if(ans[i] == s)
			{
				idx = i;
				break;
			}

		}
		if(idx == -1)
			cout<<-1<<endl;
		else
			cout<<start<<" "<<idx<<endl;

	}


	return 0;
}