#include<iostream>
using namespace std;
int main()
{
    int a[50][50],m,n,b[50][50],e=0;
    cin>>m>>n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)	
            cin >> a[i][j];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)	
            b[i][j]= a[i][j];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)	
            if (a[i][j]==0)
            {
                for (int x=0;x<m;x++)
                {
                    b[x][j]=0;
                }
                for (int y=0;y<n;y++)
                {
                    b[i][y]=0;
                }
            }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)	
            cout << b[i][j]<<;
        cout << "\n" << endl;
    }
}
