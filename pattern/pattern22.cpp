/* printf->   1 2 3 4 5 5 4 3 2 1
                              1 2 3 4 * * 4 3 2 1
                              1 2 3 * * * * 3 2 1
                              1 2 * * * * * * 2 1
                              1 * * * * * * * * 1

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
        //part 1: number from 1 to n-row+1
        col=1;
        while(col<=n-row+1)
        {
            cout<<col<<" ";
            col=col+1;
        }
        //part 2: stars (row-1)*2 times
        col=1;
        while(col<=(row-1)*2)
        {
     cout<<"*"<<" ";
       col=col+1;

        }

        // part 2: numbers from n-row+1 to 1
        col=n-row+1;
        while(col>=1)
        {
           cout<<col<<" ";
           col=col-1;
        }


        cout<<endl;
        row=row+1;

    }
}

