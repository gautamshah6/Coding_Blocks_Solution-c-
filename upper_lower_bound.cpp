#include<bits/stdc++.h>
using namespace std;

void print(int i,int a[], int n)
{
    
    auto up=upper_bound(a,a+n,i);
    auto lb=lower_bound(a,a+n,i);

    if(binary_search(a,a+n,i))
    {
      cout<<lb-a<<" "<<up-a-1<<endl; 
      return;
    }
    else{
      
      cout<<"-1 -1";
      return;
    }

}

int main()
{
  int n;
  cin>>n;

  int *a=new int[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int q;
  cin>>q;

  for(int i=0;i<q;i++)
  {
    int j;
    cin>>j;
    print(j,a,n);
  }
	return 0;
}

