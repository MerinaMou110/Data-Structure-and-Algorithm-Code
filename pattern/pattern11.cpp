 /*printf->                  A
                             B B
                             C C C 
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
         char ch='A';   
        while(col<=row)
        {
           char v=ch+row-1;
            cout<<v<<" ";
           
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }
}  

