#include<bits/stdc++.h>
using namespace std;
void sub(string s,int i,char ar[],int j){
  // base case
    if(s[i]=='\0'){
        ar[j]='\0';
        for(int i=0;i<j;i++)
          {
            cout<<ar[i]; 
          }
          cout<<endl;
        return;
    }
     //recursive
    //int x=j;
    for(int m=i;m<s.length();m++){
         
        ar[j]=s[m];
        sub(s,m+1,ar,j+1);
        sub(s,m+1,ar,j);
        
    }
    return;
}

int main()
{
	string s;
  cin>>s;
  
  char arr[1000];
  sub(s,0,arr,0);
	return 0;
}

