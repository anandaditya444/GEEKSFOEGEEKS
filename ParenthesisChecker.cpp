#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

int32_t main()
{
	IOS;
	int t;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		stack<char>st;
		int flag = 0;
		for(auto x:s)
		{
			if((x == ')' || x == '}' || x == ']') && st.empty())
			{
				cout<<"not balanced"<<endl;
				flag = 1;
				break;
			}
			if(x == '(' || x == '{' || x == '[')
				st.push(x);
			else if(x == ')' && st.top() == '(')
				st.pop();
			else if(x == '}' && st.top() == '{')
				st.pop();
			else if(x == ']' && st.top() == '[')
				st.pop();
			else
			{
				cout<<"not balanced"<<endl;
				flag = 1;
				break;
			}
		}
		if(!flag)
		{
			if(st.empty())
				cout<<"balanced"<<endl;
			else
				cout<<"not balanced"<<endl;
		}
	}
	


	return 0;
}