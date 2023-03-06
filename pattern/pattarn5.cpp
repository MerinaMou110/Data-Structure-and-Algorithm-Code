/*
                print->1
                       2 2
                       3 3 3 
                       4 4 4 4
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
        while(row>=col)
        {
            cout<<row<<" ";
            col+=1;
        }
        cout<<endl;
        row+=1;
      }
 }     

