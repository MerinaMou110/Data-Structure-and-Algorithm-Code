/*  printf->A B C 
                     D E F
                     G H I
*/

#include<iostream>
using namespace std;
int main()
{
    int n,row,col;
    cin>>n;
    row=1;
    char ch='A';
    while(row<=n)
    {
        col=1;
         //char ch='A';   
        while(col<=n)
        {
            
            cout<<ch<<" ";
            ch++;
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }
}  


