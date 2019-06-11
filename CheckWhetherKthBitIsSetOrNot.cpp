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
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;

		//simple bit solution using and operator
		if(n & (1 << k))
		    cout<<"Yes"<<endl;
		else
		    cout<<"No"<<endl;


		// int cnt = 0;
		// while(n > 0)
		// {
		// 	if(n%2 == 1)
		// 	{
		// 		if(cnt == k)
		// 		{
		// 			cout<<"Yes"<<endl;
		// 			break;
		// 		}
		// 		if(cnt > k)
		// 		{
		// 			cout<<"No"<<endl;
		// 			break;
		// 		}
		// 	}
		// 	n /= 2;
		// 	cnt++;
		// }

	}



	return 0;
}