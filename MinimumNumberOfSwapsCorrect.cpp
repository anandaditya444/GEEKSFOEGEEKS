int minimumSwaps(vector<int> arr) {
    int n = arr.size();
    int swaps = 0;
    vector<pair<int,int> >v(n);
    for(int i=0;i<n;i++)
    {
        v[i].first = arr[i];
        v[i].second = i;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i].second == i)
            continue;
        else
        {
            swap(v[i].first,v[v[i].second].first);
            swap(v[i].second,v[v[i].second].second);
        }
        if(i != v[i].second)
            i--;
        swaps++;
    }

return swaps;
}