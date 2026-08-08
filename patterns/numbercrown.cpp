#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        int spaces=2*(n-i);
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        for(int k=0; k<spaces; k++)
        {
            cout<< " ";

        }
        for(int l=i; l>=1; l--)
        {
            cout<< l;
        }
        cout<< endl;
        spaces=spaces-2;
    }
}