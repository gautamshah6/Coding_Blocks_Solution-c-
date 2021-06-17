#include<bits/stdc++.h>
using namespace std;

void print(int a[10][10],int m,int n)
{
  int sr=0;
	int sc=0;
	int er=m-1;
	int ec=n-1;
  int count=0;
  
  while(count<m*n)
  {
    for(int i=sc;i<=ec;i++)
    {
      cout<<a[sr][i]<<", ";
      count++;
    }
    sr++;

    for(int i=sr;i<=er;i++)
    {
      cout<<a[i][ec]<<", ";
      count++;
    }
    ec--;

    for(int i=ec;i>=sc;i--)
    {
      cout<<a[er][i]<<", ";
      count++;
    }
    er--;

    for(int i=er;i>=sr;i--)
    {
      cout<<a[i][sc]<<", ";
      count++;
    }
    sc++;
  }

}
int main()
{
  int m,n;
  cin>>m>>n;

  int a[10][10];

  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      cin>>a[i][j];
  }

  print (a,m,n);
  cout<<"END"<<endl;
	return 0;
}

