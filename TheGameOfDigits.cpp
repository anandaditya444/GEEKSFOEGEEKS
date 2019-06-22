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
		if(n <= 9 && n >= 1)
		{
			cout<<n<<endl;
			continue;
		}
		stack<int>digits;
		int i = 9;
		while(n > 1 && i >= 2)
		{
			while(n%i == 0)
			{
				digits.push(i);
				n /= i;
			}
			i--;
		}
		if(n != 1)
		{
			cout<<"-1"<<endl;
			continue;
		}
		int k = 0;
		while(!digits.empty())
		{
			k = k*10+digits.top();
			digits.pop();
		}
		cout<<k<<endl;
	}


	return 0;
}