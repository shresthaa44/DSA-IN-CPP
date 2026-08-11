#include<bits/stdc++.h>
using namespace std;
bool palin(string s, int i)
{
if(i>=s.size()/2)
return true;
if(s[i]!=s[s.size() - i - 1])
return false;
return palin(s, i+1);
}


int main()
{
    string s;
    cin>>s;
    int result= palin(s, 0);  // WILL RETURN A BOOLEAN VALUE(0 OR 1) AS FUNCTION IS DEFINED AS BOOLEAN TYPE

    if(result==0)
    cout<< "NOT PALINDROME";
    else
    cout<< "PALINDROME";
}