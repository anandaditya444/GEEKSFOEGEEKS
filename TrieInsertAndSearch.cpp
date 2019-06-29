// Look for delete code also
// https://www.geeksforgeeks.org/trie-delete/

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define endl "\n"

const int N = 26;

struct Trienode
{
	struct Trienode* children[N];
	bool isEnd;
};

struct Trienode* getNode()  
{
	struct Trienode* node = new Trienode;
	node->isEnd = false;
	for(int i=0;i<N;i++)
		node->children[i] = NULL;
	return node;
}

void insert(struct Trienode* root,string s)
{
	struct Trienode* pcrawl = root;
	for(int i=0;i<s.length();i++)
	{
		int idx = s[i]-'a';
		if(!pcrawl->children[idx])
			pcrawl->children[idx] = getNode();
		pcrawl = pcrawl->children[idx]; 
	}
	pcrawl->isEnd = true;
}

bool search(struct Trienode* root,string s)
{
	struct Trienode* pcrawl = root;
	for(int i=0;i<s.length();i++)
	{
		int idx = s[i]-'a';
		if(!pcrawl->children[idx])
			return false;
		pcrawl = pcrawl->children[idx];
	}
	return (pcrawl != NULL && pcrawl->isEnd);
}

int32_t main()
{
	IOS;
	int t,n;
	string s;
	cin>>t;
	while(t--)
	{
		struct Trienode* root = getNode();
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>s;
			insert(root,s);
		}
		cin>>s;
		cout<<search(root,s)<<endl;
	}
	return 0;
}

