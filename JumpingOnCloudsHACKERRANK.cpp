int jumpingOnClouds(vector<int> c) {
    int n = c.size();
    int i = 0,ans = 0;
    while(i < n-2)
    {
        if(c[i+2] == 0)
            i = i+2;
        else
            i = i+1;
        ans++;
    }
    if(i == n-2)
        ans++;
    return ans;
}