#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string a;
    char b='a',c='0';
    cin>>a;
    for (int i=0;i<(a.size()-1);i++)
    {
        if (b=='a')
        {
            if (a[i]>a[i+1])
            {
                b='d';
                c='1';
            }
        }
        else if (b=='d')
        {
             if (a[i]<a[i+1])
            {
                c='0';
            }
        }
    }
    if (c=='1')
    {
        cout<<"hill number";
    }
    else if (c=='0')
    {
        cout<<"not a hill number";
    }
    cout<<"\nenter any character to exit";
    cin>>a;
    return 0;
}
