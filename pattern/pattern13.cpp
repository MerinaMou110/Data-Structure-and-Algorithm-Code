/*               printf-> D 
                          C D
                          B C D
                          A B C D

*/
#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cin>>n;
    row=1;
    //char ch='A';
    while(row<=n)
    {
        col=1;
        
        while(col<=row)
        {
           char ch='A'+3-row+col;
            cout<<ch<<" ";
           
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }
}  