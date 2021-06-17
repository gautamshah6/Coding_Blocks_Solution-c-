#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int *a =new int[n];

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }

  int piyush=0;
  int nimit =0;
  int i=0;
  int j=n-1;
  while(i-1<j)
  {
     if(a[i]>a[j])
     {
        piyush += a[i];
        i++;
     }
     else
     {
        piyush += a[j];
        j--;
     }
      
       if(a[i]>a[j])
     {
        nimit += a[i];
        i++;
     }
     else
     {
        nimit += a[j];
        j--;
     }


  }

  cout<<piyush<<endl;
	return 0;
}

