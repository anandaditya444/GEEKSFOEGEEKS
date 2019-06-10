#include <bits/stdc++.h>
using namespace std;

#define int long long int 
const int N = 1e6+5;
int dp[N];

int t,n;

vector<int>v = {1,2,5,10,20,50,100,200,500,2000};

int dp_coins(int rem)
{
	if(rem < 1)
		return 0;
	int ans = INT_MAX;

	for(int i=0;i<10;i++)
	{
		if(v[i] <= rem)
		{
			int cur = dp[rem-v[i]];
			if(cur+1 < dp[rem])
				dp[rem] = cur+1;
		}
	}
	return dp[n];

}

int32_t main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<=n;i++)
			dp[i] = INT_MAX;
		cout<<dp_coins(n)<<endl;

	}



	return 0;
}