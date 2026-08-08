#include<bits/stdc++.h>
using namespace std;
// void printName(string name)
// {
//     cout<<"hey "<< name << "\n";
// }
// int main()
// {
//     string name;
//     cin>> name;
//     printName(name); // calling the function printName
//     string name2;
//     cin>>name2;
//     printName(name2);
//     return 0;

// }


//question: take two numbers and print its sum

int add(int a, int b)
{
    return a+b;
 
}
int main()
{
    int a,b;
    cin>> a >> b;

    int result=add(a,b);
    cout<<"Addition of "<< a << " and "<< b << " is " << result;
    return 0;
}
