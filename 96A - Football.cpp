#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int  i, n, g, k, t, x, cnt=1, sum, f=0, run=0;
  string s;
  cin >> s;
  if(s.size()%2 == 0)
    run = 1;
  for(i=0; i<s.size()-1; i++)
  {
    if(s[i] == s[i+1])
      cnt++;
    if(cnt < 2)  
    cnt++;
    if(s[i] != s[i+1])  
      cnt=0;
    if(cnt >= 7){
      f = 1; 
      break;
    } 
  }
  if(f==1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;  
}  
