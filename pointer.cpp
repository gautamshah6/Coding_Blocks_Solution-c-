#include<iostream>
using namespace std;
int main()
{
	int i=100;
	cout<<&i<<endl;
	int * p=&i;
	cout<<*p<<endl;
	cout<<i<<endl;
	i++;
	cout<<*p<<endl;
	cout<<i<<endl;
}
