
   /*                        printf->
              1
            1 2 1
          1 2 3 2 1
        1 2 3 4 3 2 1
      1 2 3 4 5 4 3 2 1
    1 2 3 4 5 6 5 4 3 2 1
  1 2 3 4 5 6 7 6 5 4 3 2 1
1 2 3 4 5 6 7 8 7 6 5 4 3 2 1
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
             cout<<" "<<" ";
             space-=1;
        }
       //print 2nd triangle
        while(col<=row)
        {
            cout<<col<<" ";
            col=col+1;
            
        }

        
    int start=row-1;
    while(start)
    {
        cout<<start<<" "; 
        start=start-1;
    }
        cout<<endl;
        row=row+1;

    }
   
}

