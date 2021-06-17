#include<bits/stdc++.h>
using namespace std;

int binary(int num)
{
    int base =1;
    int ans=0;

    while(num)
    {
       int x=num % 10;
       num=num/10;
       ans=ans+x*base;
       base=base*2;
    }
  return ans;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int num;
    cin>>num;

    cout<<binary(num)<<endl;
  }
	return 0;
}

