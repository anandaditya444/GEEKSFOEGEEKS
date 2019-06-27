//using level order traversal

Time Complexity of below implementation is O(n Log n). Note that above implementation uses map which is implemented using self-balancing BST.

We can reduce time complexity to O(n) using unordered_map. To print nodes in desired order, we can have 2 variables denoting min and max horizontal distance. We can simply iterate from min to max horizontal distance and get corresponding values from Map. So it is O(n)

Auxiliary Space : O(n)



void verticalOrder(Node *root)
{
    if(root == NULL)
        return;
    int hd = 0;
    queue<pair<Node*,int> >q;
    map<int,vector<int> >mp;
    q.push({root,hd});
    while(!q.empty())
    {
        auto temp = q.front();
        mp[temp.second].push_back(temp.first->data);
        q.pop();
        if(temp.first->left)
            q.push({temp.first->left,temp.second-1});
        if(temp.first->right)
            q.push({temp.first->right,temp.second+1});
    }
    for(auto x:mp)
    {
        for(auto c:mp[x.first])
        {
            cout<<c<<" ";
        }
    }
    cout<<endl;
}