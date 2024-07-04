/*
  POINTER is a variable that holds the address of another variable
  say int x=5; stored in bucket 8068
  int * xptr= &x; xptr stores the value 8068 i.e addr of x
*/
#include <iostream>
using namespace std;
int main(){
    int x=5;
    cout<< &x <<endl;//abc
    
    int * xptr=&x;
    cout<<xptr<<endl;//abc
    //output of both are same
    float y=5.5;
    cout<< &y <<endl;//efg
    
    float * yptr=&y;
    cout<<yptr<<endl;//efg
    //output of these 2 are same
    
    //if we want to store the address of pointer variable itself
    cout<<&xptr<<endl;//jkl
    int* * ptr_addr=&xptr;
    cout<<ptr_addr<<endl;//jkl
    //it is a pointer to a pointer
}
