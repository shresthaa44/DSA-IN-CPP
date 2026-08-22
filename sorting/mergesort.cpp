//merge sort algo


#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp; //creating a temporary array in which we will merge the sorted halves by traversing
    int i=start, j=mid+1;
    while(i<=mid && j<=end)
    {
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }



    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int i=0; i<temp.size(); i++)  //copying sorted values from temp to the origiinal array
    {
        arr[i+start]=temp[i];
    }
}

void mergesort(vector <int> &arr, int start, int end)
{
    if(start<end)
{    int mid=start+(end-start) / 2; //finding the mid element to split the array into two halves
    mergesort(arr, start, mid); //for dividing into left half
    mergesort(arr, mid+1, end); //for dividing into right half
    merge(arr, start, mid, end); //calling the merge function to merge the sorted halves.
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
    mergesort(arr, 0, arr.size()-1);
    for(auto it: arr)
    {
        cout<< it << " ";
    }
}