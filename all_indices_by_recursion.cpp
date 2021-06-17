#include<bits/stdc++.h>
using namespace std;

void all_indices(int a[],int n,int key,int i)
{
  if(n==0)
    return;
  if(a[0]==key)
  {
    cout<<i<<" ";
  }
  all_indices(a+1,n-1,key,i+1);

}

int main()
{
  int n;
  cin>>n;
  int *a=new int[n];

  for(int i=0;i<n;i++)
    cin>>a[i];
  int key;
  cin>>key;

  all_indices(a,n,key,0);
	return 0;
}

