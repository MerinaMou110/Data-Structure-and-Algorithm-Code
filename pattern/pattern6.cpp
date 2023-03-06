/*
              print->1
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
      int count=1;
      while(row<=n)
      {
        col=1;
        while(row>=col)
        {
            cout<<count<<" ";
            count+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
      }
 }  

 