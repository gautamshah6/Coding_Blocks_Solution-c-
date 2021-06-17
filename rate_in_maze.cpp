#include<bits/stdc++.h>
using namespace std;

bool maze(char a[][1000], int i ,int j, int n , int m,int o[][1000])
{
    if(i==n-1 && j==m-1)
    {
       o[i][j]=1;
    
      for(int x=0;x<n;x++)
        {
          for(int y=0;y<m;y++)
            cout<<o[x][y]<<" ";
        
          cout<<endl;
     }
     return true;
    }

    //right Move
    
    o[i][j]=1;

    if(i<n && j+1<m && a[i][j+1]!='X')
    {
      o[i][j]=1; 
      bool is_right=maze(a,i,j+1,n,m,o);
      if(is_right)
         return true;
    }

    //Down move

    if(i+1<n && j<m && a[i+1][j]!='X')
    {
      o[i+1][j]=1;

      bool is_down = maze(a,i+1,j,n,m,o);

      if(is_down)
        return true;
    }

    o[i][j]=0;
    return false;       

}

int main()
{
    int n,m;
    cin>>n>>m;
    char a[1000][1000];
    int o[1000][1000]={0};
    
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    
  bool is_path=maze(a,0,0,n,m,o);

  if(is_path)
  {
    return 0;
  }
  else
  {
    cout<<"-1"; 
  }
	return 0;
}

