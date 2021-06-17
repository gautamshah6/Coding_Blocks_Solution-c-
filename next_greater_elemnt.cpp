#include<iostream>
#include<stack>
using namespace std;
int main() {
	int n;
	cin>>n;
	stack <int> s;

	int *a =new int [n];

	for(int i=0;i<n;i++)
		cin>>a[i];
	
	for(int i=0;i<n;i++)
	{
		if(s.empty())
    {
			s.push(a[i]);
    }
		else if (a[i]<=s.top())
    {
			s.push(a[i]);

    }
		else
			{
				while(s.empty()==0 && a[i]>s.top())
				{
					s.pop();
					cout<<a[i]<<" ";
				}
				s.push(a[i]);
			}
}
cout<<s.top();

  while(s.empty())
  {
	  s.pop();
    cout<<"-1"<<" ";
  }
	

	return 0;
}
