#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n, b, t, i, j, k, g, cnt, c, h;
  vector<long long int>v;
  cin >> n >> k;
   if(n%2 == 0)
   {
    g = n/2;
   } 
   if(n%2 != 0)
   {
    g = ceil(double(n)/2);
   } 
    if(k > g)
    {
      h = abs(k-g);
      h += h;
      cout << h << endl;
      return 0;
    }
    else
    {
      h = k - 1;
      k += h;
      cout << k << endl;
      return 0;
    }
}
    
