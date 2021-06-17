#include<bits/stdc++.h>
using namespace std;

int octal(int n)
{
  int ans=0;
  int base=1;
    while(n)
    {
      int x =n&1;
      if(x)
      {
        ans = ans+base; 
      }
      else
      {
        ans =ans; 
      }
      base = base<<3;
      n=n>>1;
    }
return ans;
}

int main()
{
	int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    cout<<octal(n)<<endl;
  }
  return 0;
}

