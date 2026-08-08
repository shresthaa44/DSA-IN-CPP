#include<bits/stdc++.h>
using namespace std;

void printpattern(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<< "*";
        }
        cout<< endl;
    }
}

int main()
{
    int t; //eg for 2 test cases, printing the pattern 2 times---the number of rows and columns defined by n
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n; //taking for 1st test case--then 2nd testcase
        cin>>n;
        printpattern(n);  //calling function for each test case
    }
}