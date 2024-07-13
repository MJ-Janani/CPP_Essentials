
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout<<arr<<endl;//abc
    cout<<arr+1<<endl;//def
    int *ptr=arr;//pointer to 0th element of array
    cout<<ptr<<endl;//abc
    cout<<*ptr<<endl;//1 - value
    ptr++;
    cout<<ptr<<endl;//def i.e abc + 1...c0 > c4
    cout<<*ptr<<endl;//2 - value
    
    //Pointer to the entire array
    int (*xptr)[10];//pointer to array of 5 elements 
    xptr=&arr;//if error put &arr
    cout<<" Pointer to a array "<<xptr<<endl;//d250
    cout<<xptr+1<<endl;//d278 which is d250+40 in hex
    //(4*10)=40 nxt address
    //int *ptr[5];//(int*,int*,int*,int*,int*)

    //arr and &arr are same - gives the address
    
    
    
}
