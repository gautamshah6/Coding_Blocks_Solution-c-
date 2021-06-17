#include<bits/stdc++.h>
using namespace std;

int length(long long int n)
{
   int count=0;

   while(n)
   {
      n= n/10;
      count++;
   }
   return count;
}

bool amstrong(long long int n, int len)
{
    int num=0;
    int k=n;

    while(n)
    {
      int l=n%10;
      num=num+pow(l,len);
      n=n/10;
    }

    if(num==k)
      return true;
    else
      return false;
}

int main()
{
  long long int n;
  cin>>n;
  long long len=length(n);
	
  cout<<boolalpha<<amstrong(n,len);
  
  return 0;
}

