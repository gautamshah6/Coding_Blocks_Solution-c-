#include<bits/stdc++.h>
using namespace std;

int integer(string s,int value,int index)
{
    if(index==(int)s.length())
    {
      return value; 
    }

    value=value*10+(s[index]-'0');

    return integer(s,value,index+1);


}

int main()
{
  string s;
  cin>>s;
  cout<<integer(s,0,0)<<endl;
	return 0;
}

