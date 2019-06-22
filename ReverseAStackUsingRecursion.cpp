#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

stack<int>st;

void insert_at_bottom(int x)
{
	if(st.empty())
		st.push(x);
	else
	{
		int cur = st.top();
		st.pop();
		insert_at_bottom(x);
		st.push(cur);
	}
}

void reverse()
{
	if(st.size() > 0)
	{
		int x = st.top();
		st.pop();
		reverse();
		insert_at_bottom(x);
	}
}

int32_t main()
{
	IOS;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		st.push(i);
	reverse();
	while(!st.empty())
	{
		cout<<st.top()<<endl;
		st.pop();
	}



	return 0;
}