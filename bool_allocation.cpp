#include<bits/stdc++.h>
using namespace std;

bool is_ans(int a[],int n, int b, int mid)
{
    int student_used=1;
    int pages_reading=0;

    for(int i=0;i<n;i++)
    {
      if(pages_reading+a[i]>mid)
      {
        student_used++;
        pages_reading=a[i];
      
      if(student_used>b)
        return false;
    }
    else
      pages_reading +=a[i];
  }

  return true;
}

int page(int a[],int n,int b)
{
    if (n<b)
      return -1;

    int total_page=0;
    for(int i=0;i<n;i++)
      total_page += a[i];

    int s=a[n-1];
    int e=total_page;
    int ans=INT_MAX;
       
    while(s<=e)
    { 
      int mid=(s+e)/2;

      if(is_ans(a,n,b,mid))
      {
        ans=min(ans,mid);
        e=mid-1;
      }
      else
        s=mid+1;
    } 
    
    return ans;

}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n,b;
    cin>>n>>b;
    int *a=new int[n];

    for(int i=0;i<n;i++)
      cin>>a[i];

    cout<<page(a,n,b)<<endl;

  }
	return 0;
}

