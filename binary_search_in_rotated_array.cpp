#include<iostream>
using namespace std;

int search(int a[],int key, int n){
  int s=0;
  int e=n-1;

  int mid=(s+e)/2;
  while(s<=e)
  {

    if(a[mid]==key)
      return mid;
    if(a[s]<=a[mid])
    {
       if(key<=a[mid] && key>=a[s])
       {
          e=mid-1; 
       }
       else
       {
          s=mid+1;
 
       }
    }
    else
    {   
      if(key>=a[mid] && key <=a[e])
      {
        s=mid+1;
      }
      else       
      {
        e=mid-1;
      } 
    }  
  }
 return -1;
}
int main() {
	int n;
	cin>>n;

	int *a=new int[n];

	for(int i=0;i<n;i++)
		cin>>a[i];
	int key;
	cin>>key;
  cout<<key;
  cout<<search(a,key,n);
	
	return 0;
}
