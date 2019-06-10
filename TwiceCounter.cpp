#include <bits/stdc++.h>
using namespace std;

#define int signed long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 1e7+1;
int a[N],ans[N];

int32_t main()
{
	IOS;
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<string,int>m;
        for(int i=1;i<=n;i++)
        {
            cin>>s;
            m[s]++;
        }
        
        int cnt = 0;
        for(auto x:m)
            if(x.second == 2)
                cnt++;
        cout<<cnt<<endl;    
    }
	


	return 0;
}