#include<bits/stdc++.h>
using namespace std;

void dictionary(string s, string out)
{
    if(s.empty())
    {
      cout<<out<<endl;
      return ;
    }

   string out1=out+s[0];
   string out2=s[0]+out;

    if(out1>out2)
    {
      dictionary(s.substr(1),out1); 
    }
    else
      dictionary(s.substr(1),out2);
}

int main()
{
  string s;
  cin>>s;

  string out="";

  dictionary(s,out);
	return 0;
}

