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
		if(n == 0)
		{
			cout<<"NO"<<endl;
			continue;
		}
		if(ceil(log2(n)) == floor(log2(n)))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}



	return 0;
}