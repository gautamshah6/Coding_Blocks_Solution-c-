#include<bits/stdc++.h>
using namespace std;

int countsetbit(int n)
{
    int count=0;
    while(n)
    {
      count=count+(n&1);
      n=n>>1;
    }
    return count;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;

    cout<<countsetbit(n); 
  }
	return 0;
}

