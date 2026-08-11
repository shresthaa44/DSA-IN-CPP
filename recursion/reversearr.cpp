#include<bits/stdc++.h>
using namespace std;
void rev(int arr[], int left,int right)
{
if(left>=right)
return;
swap(arr[left], arr[right]);
rev(arr, left+1, right-1);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)  //taking input of array step by step
    {
        cin>>arr[i];
    }
    rev(arr, 0, n-1);

    for(int i=0; i<n; i++) //before this for loop, the control returns to main after base case is reached & we have obtained reverse
    {
        cout<<"Reversed array: " << arr[i]<< " ";  //printing the reversed array
    }
}