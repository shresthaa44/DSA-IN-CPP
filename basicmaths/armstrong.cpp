#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0, lastdig=0;
    int count=0;
    int orig=n;
    while(n!=0)
    {
        lastdig=n%10;
        count++;
        sum=sum+ pow(lastdig, count);
        n=n/10;
    }
    if(sum==orig)
    cout<<orig<< " is an Armstrong number";
    else
    cout<<"not armstrong";

}