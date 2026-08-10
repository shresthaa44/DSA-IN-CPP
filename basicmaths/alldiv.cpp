/* storing the factors of a number in a vector type variable.
this is because we dont know the number of factors a number might
have, so we cannot fix a size */


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
 // function to get all divisors
 vector<int> getDivisors(int n)
 {
  vector<int> vec;  // creating a vector to store divisors

  for(int i=1; i<=sqrt(n); i++)
  {
    if(n%i==0)
    {
        vec.push_back(i);
        if(n/i!=i)
        {
        vec.push_back(n/i);
        }
    }
  }
  return vec; // return the list of factors
 sort(vec.begin(), vec.end());
 }
};

int main()
{
Solution sol; //creating an object of Solution class

int n;
cin>>n;

vector<int> result= sol.getDivisors(n); //calling the function
cout<< "Divisors of " << n << ":";
for(int val: result)
{
cout<< val << " ";
}
cout<< endl;
return 0;
}