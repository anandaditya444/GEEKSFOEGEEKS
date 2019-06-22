#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

int solve(string s)
{
	//cout<<s<<endl;
	unordered_set<string>res;
	string str = "";
	for(int i=0;i<s.length();i++)
	{
		if(isdigit(s[i]))
			str.pb(s[i]);
		if(s[i] == '-')
			str.clear();
		if(str.length() == 4)
		{
			res.insert(str);
			str.clear();
		}
	}
	return res.size();
}

int32_t main()
{
	IOS;
	string s;
	getline(cin,s);
	int ans = solve(s);
	cout<<ans<<endl;

	return 0;
}