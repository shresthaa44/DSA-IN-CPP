#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++)
    {
    mpp[arr[i]]+=1; //creating map with key value pairs with numbers as keys and their frequencies as the values
    }
    int minfreq=n;
    int maxfreq=0;
    int maxel=0, minel=0;

    for(auto it: mpp)
    {
        int number=it.first;
        int freq=it.second;
        if(freq>maxfreq)
        {
        maxfreq=freq;
        maxel=number;
                }
        else if(freq<minfreq)
        {
            minfreq=freq;
            minel=number;

        }
    }
    cout<<"Highest freq element: " << maxel<< " with frequency: " << maxfreq<< endl;
    cout<< " Lowest freq element: "<< minel<< " with frequency: "<< minfreq;
}