#include<bits/stdc++.h>
using namespace std;

void selection_sort(char a[], int n)
{
    int k,j;

    for(int i=0;i<n-1;i++)
    {
      for( j=k=i;j<n;j++)
      {
        if(a[j]<a[k])
          k=j;
                 
      }
      swap(a[i],a[k]);
    }
    
    cout<<endl<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    {   
          cout<<a[i]<<" "; 
    } 
}

int main()
{
  int n;
  cout<<"Enter the size of array"<<endl;
  cin>>n;
  char a[n];

  cout<<"Enter the elements of the array"<<endl;
  for(int i=0;i<n;i++)
    cin>>a[i];
  
  selection_sort(a,n);

	return 0;
}

