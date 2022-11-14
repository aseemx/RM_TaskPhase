#include<iostream>
using namespace std;
void bub(int l,int a[50])
{
    int i;
    if (l==1)
    {
        return;
    }
    for (i=0;i<(l-1);i++)
    {
        if (a[i]>a[i+1])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    bub(l-1, a);
    return;
}
int main()
{
    int a[50];
    cout<<"enter number of elements";
    int len;
    cin>> len;
    for(int i=0;i<len;i++)
    {
        cin>>a[i];
    }
    bub(len,a);
    for(int i=0;i<len;i++)
    {
        cout<<a[i];
    }
}