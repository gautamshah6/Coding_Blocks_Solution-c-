#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b;
  cin>>a>>b;
  int x=max(a,b);
  for(int i=x;i<1000000000;i++)
  {
    if(i%a==0 && i%b==0)
    {
      int hcf=(a*b)/i;
      cout<<hcf<<endl;
      return 0;
    }
  }
	return 0;
}

