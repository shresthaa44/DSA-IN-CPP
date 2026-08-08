#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    int space=0;
 for(int i=0; i<n; i++)
        {
            
            for(int j=1; j<=n-i; j++)
            {
                cout<< "*";

            }
            for(int k=0; k<space; k++)
            {
                cout<< " ";

            }
            for(int l=1; l<=n-i; l++)
            {
                cout<< "*";
            }
            space+=2;
            cout<<endl;
        }
        space=2*n-2;
        for(int i=1; i<=n; i++)
        {
            
            for(int j=1; j<=i; j++)
            {
                cout<< "*";
            }

            for(int k=0; k<space; k++)
            {
                cout<< " ";

            }
            for(int l=1; l<=i; l++)
            {
                cout<<"*";

            }
            space-=2;
            cout<< endl;
        }
    }