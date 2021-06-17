#include<iostream>
using namespace std;

int multiply(int a[],int n, int size)
{
	int carry=0;
	for(int i=0;i<size;i++)
	{
		int prod=a[i]*n+carry;
		a[i]=prod%10;
		carry=prod/10;
	}

	while (carry)
	{
		a[size]=carry%10;
		carry=carry/10;
		size++;

	}
	return size;
}



void fact(int n)
{
	int a[500];
  a[0]=1;
	int size=1;

	for(int i=2;i<=n;i++)
		 size= multiply(a,i,size);

	for(int i=size-1;i>=0;i--)
		cout<<a[i];

}

int main()
{

	int n;
	cin>>n;
	fact(n);
}
