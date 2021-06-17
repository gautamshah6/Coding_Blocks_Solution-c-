#include<bits/stdc++.h>
using namespace std;
string movex(string s, string o)
{
    if(s.empty())
    {
      return o; 
    }

    if(s[0]!='x')
      {
        o=o+s[0]; 
      }

    string ans= movex(s.substr(1),o);

    if(s[0]=='x')
     {
       ans=ans+s[0];
     }

     return ans;
}

int main()
{
  string s;
  string o="";
  cin>>s;

  cout<<movex(s,o);
	return 0;
}

