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
	int n,t;
	cin>>t;
	while(t--)
	{
		int cnt = 0;
		cin>>n;
		while(n)
		{
			if(n%2 == 0)
			{
				cnt++;
				n /= 2;
			}
			else
			{
				cnt++;
				n--;
			}
		}
		cout<<cnt<<endl;

	}



	return 0;
}