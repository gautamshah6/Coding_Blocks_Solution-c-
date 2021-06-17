#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int a[], int n)
{
    if(n==1)
      return true;

    if(a[0]>a[1])
      return false;

    return is_sorted(a+1,n-1);
}

int main()
{
  int n;
  cin>>n;

  int *a=new int [n];
  
  for(int i=0;i<n;i++)
    cin>>a[i];

  cout<<boolalpha<<is_sorted(a,n);
	return 0;
}

