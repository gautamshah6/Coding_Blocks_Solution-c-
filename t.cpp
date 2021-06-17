#include<iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     int n;
     cin>>n;
     int a[n];

     for(int i=0;i<n;i++)
       cin>>a[i];

    for(int i=0;i<n;i++)
    {
      if((a[i]&1)==0)
      {
        int x=a[i]<<2;
        cout<<x<<" ";
      }
      else
      {
        int x= ~(a[i]);
        x++;
        cout<<x<<" ";
      }
    }
    cout<<endl;
  }
	return 0;
}

