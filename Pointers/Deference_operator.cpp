/*
  DEREFERENCE POINTER 
*/
#include <iostream>
using namespace std;
int main(){
    int x=10;
    int * xptr=&x;
    cout<<xptr<<endl;//address
    cout<<*xptr<<endl;//10 - gives the value of the bucket to which xptr is pointed
    //*xptr is the dereference operator
    cout<<*(&x)<<endl;//10
}
