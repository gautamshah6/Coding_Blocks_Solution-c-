#include<iostream>
using namespace std;

void swap (int *x,int *y)
{
	int temp;
	temp =*x;
	*x=*y;
	*y=temp;

}
void selection_sort(int a[],int n)
{
 	for(int i=0;i<n;i++)
	{
		int min=a[i];
		for(int j=i;j<n;j++)
		{
			if (min>a[j])
				min=a[j];
		}
		swap(a[i],min);
	}

	cout<<"Sorting by selection sort:"<<endl;
	  for(int i=0;i<n;i++)
  {

    cout<<a[i]<<" ";
  }
  cout<<endl;

}
void bubble_sort(int a[],int n)
{
	//	int i=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
				swap(&(a[j]),&(a[j+1]));
		}

	}
		cout<<"Sorting by bubble sort:"<<endl;
	for(int i=0;i<n;i++)
	{

		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void insertion_Sort(int *A, int n)
{
    for(int i=1;i<n;i++)
    {
      int j=i-1;
      int x = A[i];

      while(A[j]>x and j>=0)
      {
        A[j+1]=A[j];
        j--;
      }
      A[j+1]=x;
    }
}

int main(){
int n;
cin>>n;

int a[n];

for(int i=0;i<n;i++)
{
	cin>>a[i];
}

//bubble_sort(a,n);
insertion_Sort(a,n);
cout<<endl;
//selection_sort(a,n);
	for(int i=0;i<n;i++)
	{

		cout<<a[i]<<" ";
    }
return 0;
}
