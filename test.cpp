#include<bits/stdc++.h>
using namespace std;

#define x 6

void permute(char * ch, int l, int r)
{
   int i;
    if(l==r)
      cout<<ch<<endl;

    for( i=l;i<=r;i++)
    {
      swap(ch[l],ch[i]);
      permute ( ch,l+1,r);
      swap(ch[l],ch[i]);
    }



}

int main()
{
    char ch[]= "abc";

    permute(ch,0,2);
  
    for(int i=0;i<3;i++)
    {
      cout<<ch[i]; 
    }

    cout<<endl;
    return 0;
}
