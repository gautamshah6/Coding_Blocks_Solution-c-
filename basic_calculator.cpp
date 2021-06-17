#include<bits/stdc++.h>
using namespace std;

int main()
{
  char ch;
  do
  { 
    cin>>ch; 
    switch(ch)
    {
      case '+':
        int a;int b;
        cin>>a>>b;
        cout<<a+b<<endl;
        break;
      case '-':
        cin>>a>>b;
        cout<<a-b<<endl;
        break;
      case '*':
        cin>>a>>b;
        cout<<a*b<<endl;
        break;
      case '/':
        cin>>a>>b;
        cout<<(float)a/b<<endl;
        break;
      case '%':
        cin>>a>>b;
        cout<<a%b<<endl;
        break;
      case 'x':
        break;
      case 'X':
        break;
      default:
      cout<<"Invalid operation. Try again."<<endl;
      break;
    }
  }
  while(ch!='x'&& ch!='X');
	return 0;
}

