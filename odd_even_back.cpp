#include<bits/stdc++.h>
using namespace std;

int odd_even(int n,int sum)
{ 
    if(n==0)
      return 0;


    sum=sum+n%10;

    return sum+odd_even(n/10, sum);
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int sum=odd_even(n,0);

    if(sum%3==0 || sum%4==0)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
  }
	return 0;
}

