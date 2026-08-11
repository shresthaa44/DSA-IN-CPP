//printing name n times using recursion

#include<bits/stdc++.h>
using namespace std;
void namefunc(string name, int i, int n)
{
    if(i>n)
    return;
    cout<< name << endl;

    namefunc(name, i+1, n);  //function call
}

int main()
{
    int n;
    cin>>n;
    string name;
    cin>> name;
 namefunc(name, 1, n);
}