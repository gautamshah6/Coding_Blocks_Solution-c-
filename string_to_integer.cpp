#include<iostream>
using namespace std;

int str_to_int(string s, int num)
{
	if(s.empty())
	return num;

	num=num*10;
	num =num+s[0]-48;

	return str_to_int(s.substr(1),num);

}
int main() {
	string s;
  cin>>s;
	cout<<str_to_int(s,0);
	return 0;
}
