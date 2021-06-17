#include<bits/stdc++.h>
using namespace std;
string keypad[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void smartkeypad(char s[],int i,char output[],int j)
{	
	if(s[i]=='\0')
	{	output[j]='\0';
		cout<<output<<endl;
		return;
	}
	int digit=s[i]-'0';

	for(int index=0;index<(keypad[digit]).length();index++)
	{
		output[j]=keypad[digit][index];
		smartkeypad(s,i+1,output,j+1);
	}
}

int main() {

  char s[1000];
	cin>>s;
	char output[1000];
	smartkeypad(s,0,output,0);
	return 0;
}
