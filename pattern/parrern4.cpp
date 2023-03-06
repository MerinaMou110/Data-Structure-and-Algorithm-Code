/* print->          *
                    * *
                    * * *
  */                  
#include<iostream>
using namespace std;
int main()
{
    int n,row,column;
    cin>>n;
    row=1;
    while(row<=n)
    {
        column=1;
        while(row>=column)
        {
            cout<<"*"<<" ";
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
}    

