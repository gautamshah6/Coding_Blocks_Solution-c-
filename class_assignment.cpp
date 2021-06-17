#include<bits/stdc++.h>
using namespace std;

int solution(int a)
{
    if(a==1)
      return 2;
    if(a==2)
      return 3;

    int ans=solution(a-1)+solution(a-2);

    return ans;
}

int main()
{
  int n;
  cin>>n;

  int *a=new int [n];

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    cout<<"#"<<a[i]<<" : "<<solution(a[i])<<endl;
  }
	return 0;
}

