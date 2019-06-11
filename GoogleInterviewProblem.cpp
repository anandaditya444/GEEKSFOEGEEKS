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
	int n;
	cin>>n;
	char a[n+1];

	for(int i=0;i<n;i++)
		cin>>a[i];
	int r = -1,g = -1,b = -1;

	for(int i=0;i<n;i++)
	{
		if(a[i] == 'R')
		{
			a[++b] = 'B';
			a[++g] = 'G';
			a[++r] = 'R'; 
		}
		else if(a[i] == 'G')
		{
			a[++b] = 'B';
			a[++g] = 'G';
		}
		else
		{
			a[++b] = 'B';
		}
	}

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;


	return 0;
} 