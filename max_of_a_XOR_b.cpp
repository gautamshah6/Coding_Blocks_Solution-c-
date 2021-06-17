#include<bits/stdc++.h>
using namespace std;

int main()
{
  int x,y;
  cin>>x>>y;

  int max=0;

  for(int i=x;i<=y;i++)
  {
    for(int j=i;j<=y;j++)
    {
      int ans= i^j;

      if(max<ans)
        max=ans;
    }
  }

  cout<<max<<endl;
	return 0;
}

