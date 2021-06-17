#include<bits/stdc++.h>
using namespace std;

void remove(char a[],int i, char o[], int j)
{
  if(a[i]=='\0')
    {
      o[j]='\0';
      cout<<o<<endl;
      return;
    }

    if(a[i]=='p' && a[i+1]=='i')
    {
      o[j]='3';
      o[j+1]='.'; 
      o[j+2]='1'; 
      o[j+3]='4';
      return remove(a,i+2,o,j+4);
    }

    o[j]=a[i];
   return remove(a,i+1,o,j+1);
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {

  char a[1000];
  cin>>a;

  char o[3000];

  remove(a,0,o,0);
	return 0;
}
}
