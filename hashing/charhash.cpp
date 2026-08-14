// ascii table: see ascii.png in folder

//this program is to compute hash of charactes in a string

#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin>>s;
int hash[256]={0};  /*creating a hash array of size 256 for accomodating all 256 characters existing because we dont
                    know if the characters will be capital small or any other character */
 //precomputing

 for(int i=0; i<s.size(); i++)
 {
    hash[s[i]-'a']+=1;   //will give the index of the char in the hash array
 }

//fetching

int q; cin>>q;  //to input the no. of queries that we wanna ask
while(q--)
{
    char ch;
    cin>>ch;
    cout<< hash[ch-'a']<< endl;  //output the hash of char at the given index(the hash needs an integer)
}
return 0;
}

