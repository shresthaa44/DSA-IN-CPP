#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &arr, int st, int end)
{
int idx=st-1, pivot=arr[end];
for(int j=st; j<end; j++)
{
if(arr[j]<=pivot)
{
    idx++;
    swap(arr[j], arr[idx]);
}
}
idx++;
swap(arr[idx], arr[end]);
return idx;  //returning the correct position of pivot
}

void quicksort(vector<int> & arr, int st, int end)
{
    if(st<end)
    {
       int piv_ind=partition(arr, st, end);
       quicksort(arr, st, piv_ind-1);
       quicksort(arr, piv_ind+1, end);
    }
}

int main()
{
    int n;
     cin>>n;
     vector<int> arr(n);
     for(int i=0; i<n; i++)
     {
        cin>> arr[i];
     }
     quicksort(arr, 0, arr.size()-1);
     for(auto it: arr)
     {
        cout<< it << " ";
     }
}