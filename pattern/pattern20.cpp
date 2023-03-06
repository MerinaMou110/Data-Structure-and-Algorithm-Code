/*
                   printf->   1
                            2 3
                          4 5 6
                       7 8 9 10
*/
#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cin>>n;
    row=1;
    int a=1;
    
    while(row<=n)
    {
        col=1;
        int space=n-row;
        while(space)
        {
             cout<<" "<<" ";
             space-=1;
        }
        
        while(col<=row)
        {
            cout<<a<<" ";
            col=col+1;
            a=a+1;
        }
        cout<<endl;
        row=row+1;

    }
}

