#include<iostream>
using namespace std;

void change (int a[])
{

	a[0]=1;
	a[1]=2;
	a[2]=2;
}

int main (){

	int a[5]={0};
	change (a);

	for (int i=0;i<5;i++)
		cout<<a[i]<<" ";
}
