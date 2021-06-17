#include<bits/stdc++.h>
using namespace std;

int main() {
	int l1;
	cin>>l1;
	int a[l1];

	for(int i=0;i<l1;i++)
		cin>>a[i];

	int l2;
	cin>>l2;

	int b[l2];
	for(int i=0;i<l2;i++)
		cin>>b[i];
	
	int len=max(l1,l2);
	int n=max(l1,l2);
	int c[len];
	int carry=0;

	while (l1-1 >=0 && l2-1>=0)
	{	int sum=a[l1-1]+b[l2-1]+carry;
		if (sum>9)
		{
			c[len-1]=sum%10;
			carry=sum/10;
		}
		else 
		{
			c[len-1]=sum;
			carry=0;
		}
		len--;
		l1--;
		l2--;
	}
	if(l1-1==-1)
	{
		while(l2>0)
		{
			int sum=b[l2-1]+carry;
    if (sum>9)
    {
      c[len-1]=sum%10;
      carry=sum/10;
    }
    else
    {
      c[len-1]=sum;
      carry=0;

		}
		len--;
		l2--;
	}}
	else if(l2-1==-1)
  {
    while(l1>0)
    {
      int sum=a[l1-1]+carry;
    if (sum>9)
    {
      c[len-1]=sum%10;
      carry=sum/10;
    }
    else
    {
      c[len-1]=sum;
      carry=0;

    }
    len--;
    l1--;
  }
}

	for(int i=0;i<n;i++)
	cout<<c[i]<<", ";

	cout<<"END";

	return 0;
}
