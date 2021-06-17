#include<iostream>
using namespace std;

void spiral (int a[10][10],int r, int c)
{
	int sr=0;
	int sc=0;
	int er=r-1;
	int ec=c-1;

	int total_number=0;
	while (total_number<r*c)
	{
		for (int i=sr;i<=er;i++)
		{
			cout<<a[i][sc]<<", ";
			total_number++;
		}
		sc++;
		if (total_number==r*c)
				return;
		for (int i=sc;i<=ec;i++)
		{
			cout<<a[er][i]<<", ";
			total_number++;
		}
		er--;
		if (total_number==r*c)
        return;

		for(int i=er;i>=sr;i--)
		{
			cout<<a[i][ec]<<", ";
			total_number++;
		}
		ec--;
		if (total_number==r*c)
        return;

		for (int i=ec;i>=sc;i--)
		{
			cout<<a[sr][i]<<", ";
			total_number++;
		}
		sr++;
	}
}


int main() {
	int r,c;
	cin>>r;
	cin>>c;


	int a[10][10];

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}


	spiral(a,r,c);
	cout<<"END";
	return 0;
}
