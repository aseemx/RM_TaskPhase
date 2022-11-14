#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string a[50];
    cout<<"enter number of words";
    int len;
    cin>> len;
    for(int i=0;i<len;i++)
    {
        cin>>a[i];
    }
    /*int b[len];
    for (int j=0;j<len;j++)
    {
        int temp=0;
        while(a[j][temp]!='\o')
        {
            temp++;
        }
        b[j]=temp;
    }*/
    for(int j=0;j<len-1;j++)
    {
        if (a[j].size()> a[j+1].size())
        {
            string temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    for(int k=0;k<len;k++)
    {
        cout<<a[k]<<endl;
    }
    
    return 0;
}