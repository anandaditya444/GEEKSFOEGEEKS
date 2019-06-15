#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e3+5;

//https://www.geeksforgeeks.org/check-whether-given-degrees-vertices-represent-graph-tree/

//int a[N];
// map<int,int>m;

// int highestPowerof2(int n) 
// { 
//    int p = (int)log2(n); 
//    return (int)(1 << p);  
// } 

int32_t main()
{
	IOS;
	int n,x;
	cin>>n;
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		sum += x;
	}
	if(sum == 2*(n-1))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	// // for(int i=0;i<=n;i++)
	// // 	m[i] = -1;
	// for(int i=1;i<=n;i++)
	// {
	// 	cin>>x;
	// 	m[x]++;
	// }
	// // for(auto x:m)
	// // 	cout<<x.ff<<" "<<x.ss<<endl;
	// // cout<<m[3]<<endl;
	// int power_of_two = highestPowerof2(n);
	// //cout<<power_of_two<<endl;
	// int power = log2(power_of_two);

	// //cout<<power<<endl;

	// int left = n-(power_of_two+1);

	// if(m[1] == power_of_two && m[2] == 1 && m[3] == left)
	// 	cout<<"Yes"<<endl;
	// else
	// 	cout<<"No"<<endl;



	return 0;
}