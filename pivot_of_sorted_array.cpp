#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n; cin>>n;	
  int *a=new int [n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=0;i<n-1;i++)
    {
      if(a[i]>a[i+1])
        {
          cout<<i<<endl;
          return 0; 
        }
    }
	return 0;
}

