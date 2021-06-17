#include<iostream>
using namespace std;

void ret(int *n) {
		*n=*n+2;
}
int main(){
	int i=10;
	ret(&i);
	cout<<i<<endl;
}

