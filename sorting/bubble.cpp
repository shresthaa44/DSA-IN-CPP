//bubble swap with early termination or optimized bubble sort----efficient when the array is sorted or almost sorted


#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n)
{
for(int i=0; i<n-1; i++)
{
    bool isSwap=false; //initializing as false
    for(int j=0; j<n-i-1; j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j], arr[j+1]);
            isSwap=true; //as soon as swap happens, changes to true.
        }

    }
    if(!isSwap)
    return; //if there are  no swaps at any step, then return to main and return the sorted array order
}
}
int main()
{
    int n;
     cin>>n;
    int arr[n];
    cout<< "Array before sorting";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    bubblesort(arr, n);
    cout<< "Array after sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<< arr[i] << " ";
    }
}