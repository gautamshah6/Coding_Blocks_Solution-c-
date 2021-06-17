#include<bits/stdc++.h>
using namespace std;

int main()
{
  int r; cin>>r;

  int coef=1;

  for(int i=0;i<r;i++)
  {
    for(int s=1;s<r-i;s++)
      cout<<"    ";
    
    for(int j=0;j<=i;j++)
      {
        if(j==0 || i==0)
          coef=1;
        else
          coef=coef*(i-j+1)/j;
        cout<<coef<<"        ";
      }
          cout<<endl;
  }
	return 0;
}

