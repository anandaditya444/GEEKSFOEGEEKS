#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int a[n+1],b[m+1];
		int sum1 = 0,sum2 = 0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			sum1 += a[i];
		}
		for(int i=1;i<=m;i++)
		{
			cin>>b[i];
			sum2 += b[i];
		}
		int flag = 0;
		for(int i=1;i<=n;i++)
		{
			int temp_sum1 = sum1-a[i];

			for(int j=1;j<=m;j++)
			{
				int temp_sum2 = sum2-b[j];

				if(temp_sum1+b[j] == temp_sum2+a[i])
				{
					//cout<<a[i]<<" "<<b[j]<<endl;
					cout<<1<<endl;
					flag = 1;
					break;
				}
			}
			if(flag)
				break;
		}
		if(!flag)
			cout<<"-1"<<endl;

	}


	return 0;
}