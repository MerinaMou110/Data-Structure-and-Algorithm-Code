#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;

/* Bitwise AND: (&)
  eg: 4 & 6= 100
            &110
             -----
             100 = 4
*/
cout<<"a&b "<<(a&b)<<endl;

/* Bitwise OR: (|)
  Eg: 4|6 : 100
            110
            ----
            110 = 6
 */           
    cout<<"a|b "<<(a|b)<<endl;

 /* Bitwise not : (~)

 Eg: (consider 4 byte representation)
   a=4 = 000......0100  (30 bit)
   a=~4 =111......1011
       1=first signed bit  
   Two's complement : 000......0100
                      +           1
                      --------------
                      000.......0101=-5
 */                         
    cout<<"~a "<<~a<<endl;

 /*
 Bitwise XOR: (^)
 Eg:  4^6 =100
           110
           ----
           010 =2 
  if different bits-> 1
  if same bits-> 0
  */            
    cout<<" a^b "<<(a^b)<<endl;

    
}