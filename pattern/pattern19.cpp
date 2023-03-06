/*
                printf->1
                        22
                        333
                        4444
*/

#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cin>>n;
    row=1;
    
    while(row<=n)
    {
        col=1;
        int space=n-row;
        while(space)
        {
             cout<<" ";
             space-=1;
        }
        while(col<=row)
        {
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }
}  


