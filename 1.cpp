#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[100];
    cin>>a;
    int len=strlen(a);
    for (int i= (len-1);i>0;i--)
    {
        for (int j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }

        }
    }
    cout<<a;
    return 0;
}