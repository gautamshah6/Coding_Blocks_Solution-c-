#include<iostream>
using namespace std;

int subseq(string input, string output[])
{
	if(input.empty())
	{

		output[0]="";
		return 1;
	}
	
	string smallInput=input.substr(1);
	int number=subseq(smallInput,output);

	for(int i=0;i<number;i++)
		output[i+number]=input[0]+output[i];

		return 2*number;
}

int main()
{
	string s;
	cin>>s;
	string * output=new string[1000];
	int subseqnumber=subseq(s,output);

	for(int i=0;i<subseqnumber;i++)
	{
		cout<<output[i]<<endl;
	}
	
}
