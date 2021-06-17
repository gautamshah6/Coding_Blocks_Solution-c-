#include<bits/stdc++.h>
using namespace std;

bool cowstall(int a[],int n,int c, int mid)
{
    int last_cow =a[0];
    
    int cow=1;
    for(int i=1;i<n;i++)
    {
      if(a[i]-last_cow>=mid)
        {
          last_cow=a[i];
          cow++;
            
          if(cow==c)
          {
            return true; 
          }
        }

    }
    return false;
}
int main()
{
  int n,c;
  cin>>n>>c;

  int *a = new int[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int s=0;
  int e=a[n-1]-a[0];
  int ans =0;

  while(s<=e)
  {
    int mid=(s+e)/2;
    bool ispossible=cowstall(a,n,c,mid); 
    if(ispossible)
    {
      ans=mid;
      s=mid+1;  
    }
    else 
    {
      e=mid-1;
    }
  }
  cout<<ans;

	return 0;
}

