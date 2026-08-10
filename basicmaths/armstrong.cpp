#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0, lastdig=0;
    int original=n;
    while(n!=0)
    {
        lastdig=n%10;
        sum=sum+lastdig*lastdig*lastdig;
        n=n/10;
    }
    if(sum==original)
    cout<<n<< " is an Armstrong number";
    else
    cout<<"not armstrong";

}