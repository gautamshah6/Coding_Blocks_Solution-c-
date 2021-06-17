#include<iostream>
using namespace std;

int main(){

	int a[10];

	for(int i=0;i<10;i++)
		a[i]=i;

	cout<<"call by *[a+i]"<<endl;

	for (int i=0;i<10;i++)
		cout<<*(a+i)<<endl;
	
	cout<<endl<<"Call by a[i]"<<endl;

	for (int i=0;i<10;i++)
    cout<<a[i]<<endl;

	cout<<endl<<"Call by i[a]"<<endl;

  for (int i=0;i<10;i++)
    cout<<i[a]<<endl;


}

