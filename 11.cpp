#include<iostream>
using namespace std;
void bin(int first,int last,int a[], int num)
{
    int mid;
    if(first > last)
    {
        cout<<"Number is not found";
    } 
    else
    {
        mid = (first + last)/2;
        if(a[mid]==num)
        {
            cout<<"Element is found at index"<<mid;
            exit(0);
        }
        else if(a[mid] > num)
        {
            bin(first, mid-1, a , num);
        }
        else if(a[mid] < num)
        {
            bin(mid+1, last, a , num);
        }
    }
}
int main()
{
    int len, a[100] ,num;
    cin>>len;
    for(int i=0;i<len;i++)
    {
        cin>>a[i];
    }
    cin>>num;
    bin(0,len-1,a,num); 
}