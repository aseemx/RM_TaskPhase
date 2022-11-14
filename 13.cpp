#include<iostream>
using namespace std;
int sum(int n)
{
    if (n==0)
    {
        return n;
    }
    return n%10+sum(n/10);
}
int main()
{
    int n,s1=0,s2=0;
    cin>>n;
    cout<<"sum using recursion"<<sum(n)<<endl;
    while(n>0)
    {
        s2+=n%10;
        n/=10;
    }
    cout<<"sum without using recursion"<<s2;
}