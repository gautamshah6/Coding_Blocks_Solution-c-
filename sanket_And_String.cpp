#include<bits/stdc++.h>
using namespace std;
int max_length(string s, int n, char a)
{
  int i=0;
  int j=0;
  int max_len=0;
  int count =0;

  while(j< (int)s.size())
  {
    if(s[j]!=a ) 
    {
      count++; 
    }

    while(count>n)
    {
      if(s[i]!=a)
        count--;
      i++;
    }

    max_len=max(max_len,j-i+1);
    j++;

  }
  return max_len;
}

int main()
{
  string s;
  int n;
  cin>>n;
  cin>>s;

  int ans =max(max_length(s,n,'a'),max_length(s,n,'b'));
  cout<<ans;
	return 0;
}

