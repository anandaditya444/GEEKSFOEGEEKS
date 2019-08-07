int makeAnagram(string a, string b) {
    map<char,int>m;
    for(auto &x:a)
    {
        m[x]++;
    }
    int ans = 0;
    for(auto &x:b)
    {
        if(m[x] > 0)
        {
            m[x]--;
        }
        else
        {
            ans++;
        }
    }
    for(auto &x:m)
    {
        if(x.second > 0)
            ans += x.second;
    }
    return ans;
}