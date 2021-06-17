#include<bits/stdc++.h>
using namespace std;

bool order(pair<string, int>a, pair<string, int>b)
{
    if(a.second==b.second)
      return a.first<b.first;

    return a.second>b.second;

}

void sort_game(pair<string, int>p[],int n, int min)
{
    sort(p,p+n,order);

    for(int i=0;i<n;i++)
    {
      if(p[i].second>=min)
      {
        cout<<p[i].first<<" "<<p[i].second<<endl; 
      }
    }
}

int main()
{
  int min; cin>>min;
  int n; cin>>n;

  pair<string, int>p[n];

  for(int i=0;i<n;i++)
  {
    cin>>p[i].first;
    cin>>p[i].second;
  }

  sort_game(p,n,min);
	return 0;
}

