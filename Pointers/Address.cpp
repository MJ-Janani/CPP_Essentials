/*
  Address of operator
  &p -  address of p
*/
#include <iostream>
using namespace std;
int main(){
int p=5;
cout<< p <<endl;//5
cout <<&p <<endl;//address of bucket which stores 5
//0x7ffcf694b5dc- base 16 hexadecimal no.
int arr[100];
//array name itself represents the array address
cout<< arr <<endl;
cout<< &arr <<endl;
/*
0x7fffd7526b10
0x7fffd7526b10
both same 
*/
char letter;
cout<<&letter<<endl;//doesnt print the address
/*separate functionality for char addresses
by default it holds some garbage value
*/
char alph='H';
cout<<&alph<<endl;//H
//typecast to get the address
cout<<(void *)&letter<<endl;//special behaviour
cout<<(void *)&alph<<endl;
}
