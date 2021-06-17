#include<bits/stdc++.h>
using namespace std;
set <string> s;
void rec (int n)
{
    if (n<0)
      return;
  int t=n;
  string str ="";
  while(t)
  {
    char ch = (t%10)+48;
    str= ch+str;
    t=t/10;
  }
  if(str!="")
    s.insert(str);

  rec(n-1);

}
int main()
{
  int n;
  cin>>n;
  s.insert("0");
  rec (n);
  for(string x: s)
  {
    cout<<x<<" ";
  }
	return 0;
}

