#include <iostream>
using namespace std;

void b_sort(int a[], int n)
{
    if(n==0)
        return;
    for (int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
            swap(a[i],a[i+1]);
    }

    b_sort(a,n-1);
    
}

int main() {
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    b_sort(a,n);

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}

