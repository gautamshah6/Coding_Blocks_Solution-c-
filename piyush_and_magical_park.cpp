#include<bits/stdc++.h>
using namespace std;

void print(char a[100][100],int s, int k, int n, int m)
{
  bool sucess =true;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(s<k)
      {
        cout<<"No"<<endl;
        sucess=false;
        return;
      }

      if(a[i][j]=='*')
      {
        s += 5;
       }
       else if(a[i][j]=='.')
       {
          s -= 2; 
       }
       else{
          break; 
       }

       if(j!=m-1)
         s--;
    }
  }
  if(sucess)
    cout<<"Yes"<<endl<<s<<endl;
  

}

int main()
{
  int n,m,k,s;
  cin>>n>>m>>k>>s;

  char a[100][100];

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
        cin>>a[i][j];
  }

  print(a,s,k,n,m);
	return 0;
}

