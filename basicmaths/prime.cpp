#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2; i<=n-1; i=i+1)
    {
        if(n%i==0)
        {
        cout<<"not a prime number";
        break;
        }
        cout<<"prime number";
        break;
    }
        
    return 0;

    }