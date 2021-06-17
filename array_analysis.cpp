#include<iostream>
using namespace std;

void array(int a[],int n)
{
	static int first, last;
	static int count=0;
	static int index;
	index++;

if(a[0]==7)
	{
			count++;
			last=index-1;
	}
	if(count!=0 && first==0)
	{
		first=index-1;	
	}

	if (n==0)
	{
		if (count)
		{

		cout<<"YES"<<endl;
		cout<<"first index: "<<first<<endl;
		cout<<"Last index: "<<last<<endl;
		cout<<"Total no of 7 is : "<<count<<endl;
		return;
	}
	else 
		{
			cout<<"No"<<endl;
			return;
		}
}
	array(a+1,n-1);
}
	int main()
	{
		int n;
		cin>>n;
		int a[n];

		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		array(a,n);
	}

