#include<bits/stdc++.h>
using namespace std;

int setbit(int i)
{
    int count=0;
    while(i)
    {
      count=count+(i&1);
      i=i>>1;
    }
    return count;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    int ans=0;
  for(int i=a;i<=b;i++)
  {
    ans=ans+ setbit(i);
  }
  cout<<ans<<endl;
  }
	return 0;
}

