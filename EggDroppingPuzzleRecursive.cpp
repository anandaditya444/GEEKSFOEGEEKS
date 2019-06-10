#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

//Recursive Approach

int dp(int n,int k)
{
	if(k == 0 || k == 1)
		return k;
	if(n == 1)
		return k;
	int ans = INT_MAX;

	for(int i=1;i<=k;i++)     //check for every floor
	{
		int res = max(dp(n-1,i-1),dp(n,k-i));  //consider both the cases of either egg breaks or not.
		if(res < ans)
			ans = res; 
	}
	return ans + 1;

}

int32_t main()
{
	IOS;
	int n,t,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cout<<dp(n,k)<<endl;
	}

	return 0;
}