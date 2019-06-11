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
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int flag = 0,cnt = 0;
		while(n > 0)
		{
			cnt++;
			if(n%2 == 1)
			{
				cout<<cnt<<endl;
				flag = 1;
				break;
			}
			n /= 2;
		}
		if(!flag)
			cout<<0<<endl;

	}



	return 0;
}