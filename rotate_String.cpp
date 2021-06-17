#include<bits/stdc++.h>
using namespace std;

void rotate(string s)
{
    string out="";
    for(int i=0;i<s.size();i++)
    {
      out="";

      for(int j=0;j<s.size();j++) 
        out += s[(s.size()-i+j)%s.size()];
      cout<<out<<endl;
    }

}


int main()
{
  string s;
  cin>>s;

  rotate(s);
	return 0;
}

