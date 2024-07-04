/*
Passing data to functions:
1. Pass by reference: NO COPY of (actual object / bucket)
    i) using pointers
    ii)using reference variables
*/
#include <iostream>
using namespace std;
void incMoney(int * moneyptr){//pointer variable
    cout<<moneyptr<<endl;//address
    cout<<*moneyptr<<endl;//de-refernce operator- value-10
    *moneyptr=2*(*moneyptr);
    cout<<(*moneyptr)<<endl;//20
}
int main(){
    int money=10;
    //PAss by reference using pointer variables
    incMoney(&money);//address
    cout<<"Main:"<<money<<endl;//20
}
