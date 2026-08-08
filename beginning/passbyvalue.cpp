//pass by value

#include<bits/stdc++.h>
using namespace std;

void doSomething(int num)
{
    cout<< num << endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

int main()
{
    int num=10;
    doSomething(num);
    cout<<num<< endl;
    return 0;
}

//the output for this will be 10--then next line 15--20 then 10 again
/* why 10 again? because for pass by value, the copy of 
the original variable is passed to the function while the original
value is kept preserved. 

thus it does execute the original num in the function and performs
operations on it, but when we print the value of num in main, it 
gives us the original value
 */