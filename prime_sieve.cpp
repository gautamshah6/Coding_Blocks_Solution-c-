#include<bits/stdc++.h>
using namespace std;

long long bool a[10000];

int prime(int n)
{
    a[0]=false; a[1]=false;
    for(int i=2;i<10000;i++)
    {
      if(a[i]==true)
      {
        for(int j=i;i*j<10000;j++)
        {
          a[i*j]=false; 
        }
      }
    }
    

    int index=0;
    int b[10000];
    for(int i=0;i<10000;i++)
    {
      if(a[i]==true)
      {
         b[index]=i;
         index++;
      }
    }

    return b[n-1];
}

int main()
{
  int n;
  cin>>n;

  for(int i=0;i<10000;i++)
      a[i]=true;

  cout<<prime(n);
	return 0;
}

