
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    //Pointer to the entire array
    int (*xptr)[10];//pointer to array of 5 elements 
    xptr=&arr;//if error put &arr
    cout<<" Pointer to a array "<<xptr<<endl;//d250
    cout<<xptr+1<<endl;
    
    //Dereferencing the pointer to array
    
    cout<<(*xptr)<<endl;//gives the arr which is adress not the contents of array *(&arr)=arr
    cout<<arr<<endl;//both same
    
}
