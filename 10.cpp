#include<iostream>
using namespace std;
int fib(int n)
{
    int x;
    if (n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    x=fib(n-1)+fib(n-2);
    return x;
}
int main()
{
    int n=40,temp;
    for(int i=1;i<=n;i++)
    cout<<fib(i)<<endl;
}