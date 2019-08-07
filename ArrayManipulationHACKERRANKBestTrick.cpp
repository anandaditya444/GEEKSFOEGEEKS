// https://www.hackerrank.com/challenges/crush/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=arrays

// You are given a list of size n, initialized with zeroes. You have to perform m queries on the list and output 
// the maximum of final values of all the n elements in the list. For every query, you are given three integers 
// a, b and k and you have to add value k to all the elements ranging from index a to b(both inclusive).

// Editorial Link

// https://www.hackerrank.com/challenges/crush/editorial?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=arrays


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
	int n,m,a,b,k;
	cin>>n>>m;
	int *arr = new int[n+1];
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b>>k;
		arr[a] += k;
		if((b+1) <= n)
			arr[b+1] -= k;
	}
	int ans = 0;
	for(int i=1;i<=n;i++)
	{
		arr[i] += arr[i-1];
		ans = max(ans,arr[i]);
	}
	cout<<ans<<endl;

	return 0;
}