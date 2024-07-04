/*
Passing data to functions:
1. Pass by reference: NO COPY of (actual object / bucket)
    i) using pointers
    ii)using reference variables- easy 
*/
#include <iostream>
using namespace std;
void incMoney(int &myMoney){//reference variable
    myMoney=2*myMoney; //any changes we do here gets reflected in the main too
    cout<<"My money: "<<myMoney<<endl;//20
}
int main(){
    int money=10;
    //PAss by reference using reference variables
    incMoney(money);
    cout<<"Main money"<<money <<en dl;//20
    
}
