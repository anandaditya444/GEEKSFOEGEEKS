#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define endl "\n"

int precedence(char op)
{
	if(op == '+' || op == '-')
		return 1;
	if(op == '*' || op == '/')
		return 2;
	return 0;
}

int applyOp(int a,int b,char op)
{
	switch(op)
	{
		case '+':return a+b;
		case '-':return a-b;
		case '*':return a*b;
		case '/':return a/b;
	}
}

int evaluate(string s)
{
	int i;
	stack<int>values;
	stack<char>ops;

	for(i=0;i<s.length();i++)
	{
		if(s[i] == ' ')
			continue;
		else if(s[i] == '(')
		{
			ops.push(s[i]);
		}
		else if(isdigit(s[i]))
		{
			int val = 0;
			while(i < s.length() && isdigit(s[i]))
			{
				val = val*10+(s[i]-'0');
				i++;
			}
			values.push(val);
		}
		else if(s[i] == ')')
		{
			while(!ops.empty() && ops.top() != ')')
			{
				int val2 = values.top();
				values.pop();
				int val1 = values.top();
				values.pop();
				char op = ops.top();
				ops.pop();
				values.push(applyOp(val1,val2,op));
			}
			ops.pop();
		}
		else
		{
			while(!ops.empty() && precedence(ops.top()) >= precedence(s[i]))
			{
				int val2 = values.top();
				values.pop();
				int val1 = values.top();
				values.pop();
				char op = ops.top();
				ops.pop();
				values.push(applyOp(val1,val2,op));
			}
			ops.push(s[i]);
		}
	}
	while(!ops.empty())
	{
		    int val2 = values.top();
			values.pop();
			int val1 = values.top();
			values.pop();
			char op = ops.top();
			ops.pop();
			values.push(applyOp(val1,val2,op));
	}
	return values.top();
}

int32_t main()
{
	IOS;
	int t;
	string s;
	cin>>t;
	while(t--)
	{
		cin.ignore();
		getline(cin,s);
		cout<<evaluate(s)<<endl;
	}



	return 0;
}