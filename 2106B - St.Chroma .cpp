#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t, i, j, k, g, sum, cn1, h, n, excn;
  long long int f, l2, l3, b1, b2, b3, x;
  string b;
  cin >> t;
  while(t--)
  {
    cin >> n >> x;
    g = 0;
    f = 0;
    for(i=0; i<n; i++)
    {
      if(i==(n-1))
      {
        if(x==n)
          x -= 1;
        cout << x;
      }  
      else
       {
         if(x==i)
           f = 1;
          if(f==1) 
          {
            g = i + 1;
            cout << g << " ";
          }
          else
           cout << i << " ";   
       } 
    }
    cout << endl;
  }
}
    
