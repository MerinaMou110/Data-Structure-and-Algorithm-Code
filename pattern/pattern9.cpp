
                 /*
                 A B C 
                 A B C
                 A B C
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
         char ch='A';   
        while(col<=n)
        {
            
            cout<<ch<<" ";
            ch=ch+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }
}  
