#include<iostream>
using namespace std;

string bin(int num)
{
    int num_b,b=0;
    num_b=num;
    while (num_b!=0)
    {
        b=b*10+(num_b%2);
        num_b=num_b/2;
    }
    string s = to_string(b);
    for(int i=0;i<(s.size()/2)-1;i++)
    {
        char temp=s[i];
        s[s.size()-i-1]=s[i];
        s[i]=temp;
    }
    return s;



}
int main()
{
    int num;
    int num_b,num_o,num_h;
    cin>>num;
    printf("%s",bin(num));
    
}