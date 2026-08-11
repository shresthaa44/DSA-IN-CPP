///printing numbers n to 1


#include<bits/stdc++.h>
using namespace std;

void reverse(int i, int n)
{
  if(i<1)  //if i falls below 1, we dont need its value
  return;
  cout<< i<< endl;
  reverse(i-1, n);   // after each call, i keeps reducing 
    
}

int main()
{
    int n;
    cin>>n;
    reverse(n, n);  //starting with giving value n to i such that iterating starts from n and keeps reducing
}