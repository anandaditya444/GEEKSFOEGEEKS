https://www.hackerrank.com/challenges/new-year-chaos/problem?h_l=interview&h_r%5B%5D%5B%5D%5B%5D%5B%5D=next-challenge&h_r%5B%5D%5B%5D%5B%5D%5B%5D=next-challenge&h_v%5B%5D%5B%5D%5B%5D%5B%5D=zen&h_v%5B%5D%5B%5D%5B%5D%5B%5D=zen&isFullScreen=true&playlist_slugs%5B%5D%5B%5D%5B%5D%5B%5D%5B%5D%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D%5B%5D%5B%5D%5B%5D%5B%5D%5B%5D=arrays

void minimumBribes(vector<int> q) {
   int ans = 0;
   for(int i=q.size()-1;i>=0;i--)
   {
       if(q[i]-(i+1) > 2)
       {
           cout<<"Too chaotic"<<endl;
           return;
       }
       for(int j=i-1;j>=max(0,q[i]-2);j--)
       {
           if(q[j] > q[i])
                ans++;
       }
   }    
   cout<<ans<<endl;
}