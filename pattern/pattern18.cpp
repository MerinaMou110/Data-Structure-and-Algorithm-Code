/*               printf->1111
                          222
                           33
                            4
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
        int space=1;
        while(space<row)
        {
             cout<<" ";
             space+=1;
        }
        while(col<=n-row+1)
        {
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }
}  

