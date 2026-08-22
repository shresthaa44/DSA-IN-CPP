#include<bits/stdc++.h>
using namespace std;
void secondlargest(int arr[], int n)
{
    int largest=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]> largest)
        largest=arr[i];
    }
    int slargest=-1;
    for(int i=0; i<n; i++)
    {
    if(arr[i]> slargest && arr[i]!=largest)
    {
        slargest=arr[i];
    }
    }
    cout<< "Second largest element: "<< slargest;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    secondlargest(arr, n);
}