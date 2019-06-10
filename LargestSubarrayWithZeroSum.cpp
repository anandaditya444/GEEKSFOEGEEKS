#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)
			cin>>a[i];

		//O(n^2) approach

		// int len = 0;
		// for(int i=1;i<=n;i++)
		// {
		// 	int sum = 0;
		// 	for(int j=i;j<=n;j++)
		// 	{
		// 		sum += a[j];
		// 		if(sum == 0)
		// 			len = max(len,j-i+1);
		// 	}
		// }
		// cout<<len<<endl;

		//O(n) approach hashing

		unordered_map<int,int>m;
		int maxlen = 0;
		int sum = 0;
		for(int i=1;i<=n;i++)
		{
			sum += a[i];
			if(sum == 0)
				maxlen = i;
			if(m.find(sum) != m.end())
			{
				maxlen = max(maxlen,i-m[sum]);
			}
			else
			{
				m[sum] = i;
			}
		}
		cout<<maxlen<<endl;		
	}



	return 0;
}