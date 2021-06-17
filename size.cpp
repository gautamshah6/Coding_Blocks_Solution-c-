#include<iostream>
using namespace std;
int main(){
	
	char a[20]="qwerty";
	int size;
	while(a[size]!='\0')
	{
		size++;
	}
	cout<<size<<endl;
 int s=sizeof (a)/sizeof (char);
 cout<<s<<endl;
}
