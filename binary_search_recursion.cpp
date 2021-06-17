#include<iostream>
using namespace std;

int binary_search(int a[],int start,int end, int key)
{ int mid =(start+end)/2;
	if (start>=end && a[mid]!=key)
			return -1;

	if (a[mid]==key)
		{
			return mid;
		}
		else if (a[mid]<key)
		{
			start=mid+1;
			binary_search(a,start,end,key);

		}
		else if (a[mid]>key)
			{

			end=mid;
			binary_search(a,start,end,key);
			}
			else  
				return -1;
}

int main(){

	int n,key;
	cin>>n;

	int a[n];

	for(int i=0;i<n;i++)
		cin>>a[i];

	cin>>key;
		cout<<binary_search(a,0,n-1,key);

}
