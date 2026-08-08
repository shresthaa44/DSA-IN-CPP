#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int original=n;
    int reverse=0;
    int lastdig=0;

    while(n!=0)
    {
        lastdig=n%10;
        reverse=reverse*10+lastdig;
        n=n/10;

    }
    if(original==reverse)
    {
        cout<<original<< " is a palindrome number";

    }
    else
    cout<<"not a palindrome number";
    return 0;
}