#include<bits/stdc++.h>
using namespace std;

void braces(string output, int n,int open, int close)
{
    if(int(output.size())==2*n)
    {
      cout<<output<<endl;
      return;
    }
    if(open<n)
      braces(output+'(',n, open+1 ,close);

    if(close<open)
      braces(output+')',n,open,close+1);

    return;
}

int main()
{
	int n;
  cin>>n;
  string o="";

  braces(o,n,0,0);
  return 0;
}

