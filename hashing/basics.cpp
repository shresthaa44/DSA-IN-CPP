/* format like:
5
1 2 3 3 2 
5
1
3
2
4
5
*/





#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    //now we will pre compute---that is pre storing the hash array
    int hash[13]={0};  // creating hash array with 13 zeroes initialized as original values
    for(int i=0; i<n; i++)
    {
     hash[arr[i]]+=1;
    }

    //fetching
    int  q; //how many queries do we wanna give
    cin>>q;
    while(q--)
    {
    int number;
    cin>> number;
    cout<< hash[number] << endl;
    }
    return 0;
}