#include<iostream>
#include<cstring>
using namespace std;
string* copy(string og)
{
    string* p=&og;
    return p;
}

int main()
{
    string a,b;
    cin>>a;
    b=*copy(a);
    cout<<b;
}