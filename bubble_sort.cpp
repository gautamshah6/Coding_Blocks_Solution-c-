#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n-i-1;j++)
      {
        if(a[j]>a[j+1])
        {
          swap(a[j],a[j+1]); 
        }
         
      }
    }

    for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
}

int main()
{
  int n;
  cin>>n;
  int *a=new int [n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  bubble_sort(a,n);
	return 0;
}

