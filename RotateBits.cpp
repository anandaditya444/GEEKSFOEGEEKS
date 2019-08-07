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
	int n,t,d;
	cin>>t;
	while(t--)
	{
		cin>>n>>d;
		int num = n;
		int rot = d;
		while(rot--)
		{
			
			num <<= 1;
		}
		cout<<num<<endl;

		num = n;
		rot = d;
		while(rot--)
		{
			num >>= 1;
		}
		cout<<num<<endl;
	}



	return 0;
}