#include<bits/stdc++.h>
using namespace std;

bool comparator(pair<int, int> a, pair<int, int> b)
{
    return a.second<b.second;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;
    pair<int, int>p[n];
    
    for(int i=0;i<n;i++)
    {

      cin>>p[i].first;
      cin>>p[i].second;

    }
    int count=1;

    sort(p,p+n,comparator);
    
    int i=0;
    int j=1;
    while(j<n)
    { 
           
      if(p[i].second<=p[j].first)
      {
        count++;
        i=j;
        j++;
      }
      else
        j++;
    }
      cout<<count<<endl;

  }
	return 0;
}

