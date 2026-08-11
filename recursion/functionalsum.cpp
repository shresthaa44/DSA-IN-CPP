//finding sum using recursion with function that returns some value


#include<bits/stdc++.h>
using namespace std;
int sum(int  n)
{
if(n==0)
return 0;
else
return n + sum(n-1);
}

int main()
{
    int n;
    cin>>n;

cout<< sum(n);
}