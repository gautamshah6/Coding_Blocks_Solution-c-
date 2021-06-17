#include<bits/stdc++.h>
using namespace std;


string duplicate (string input, string output)
{
	if(input.empty())
		{
			//	cout<<output;
				return output;
		}
	
	if(input[0]==input[1])
	{
		output=output+input[0];
		output=output+"*";
		return	duplicate(input.substr(1),output);
	}
	
		output=output+input[0];
		return	duplicate(input.substr(1),output);
	

} 

int main() {
	string s;
	cin>>s;

	string output="";

	cout<<duplicate(s,output);



	return 0;
}
