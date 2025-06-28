#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t, i, j, k, g, sum, cn, h, n, excn;
  long long int f, a, b, c, x, ar[950][950];
  cin >> t;
  while(t--)
  {
    cin >> n;
    vector<long long int>v(2*n);
    vector<long long int>v1(2*n);
    cn = 1;
    g = 2*n;
    for(i=0; i<n; i++)
    {
      for(j=0; j<n; j++){
        cin >> ar[i][j];
        v[i+j] = ar[i][j];
        v1[i+j] = ar[i][j];
      }   
    }
    sort(v1.begin(),v1.end());
    for(i=g-1; i>=0; i--)
    {
      if(v1[i] == g)
        g--;
    }
    for(i=0; i<2*n-1; i++)
    {
      if(i==0)
       cout << g << " ";
      cout << v[i] << " ";  
    }
    cout << endl;
  }
}
    
