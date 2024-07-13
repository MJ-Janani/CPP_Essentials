int arr[10]
//arr acts as a constant pointer pointing the address of starting index
//once created arr cant hold the address of any other variable
/*POINTER ARITHMETIC
ptr++ //takes to the next new cell say ptr is in 1024 it takes to 1025
  ptr+=5 //5 cells apart
  */

#include <iostream>
using namespace std;

int main() {
    int arr[10]={1,2,3,4,5};
    cout<<arr<<endl;//address- abc
    int *ptr=arr; 
    cout<<"Earlier ptr: "<<ptr<<endl;//abc
    int x=100;
    ptr=&x;//pointer we can read,write update
    cout<<"New ptr: "<<ptr<<endl;//rst some other addr
    //arr=&x;//error bcoz arrr is read only or a constant pointer
    for(int i=0;i<5;i++){
        cout<<ptr<<" Data "<<*(ptr)<<endl;
        ptr=ptr+1;//1 means moves one box/cell i.e 4 bytes
        //f0 > f4 > f8 > fc
    }
    ptr=arr;
    for(int i=0;i<=10;i++){
        //cout<<arr[i]<<endl;//compiler breaks down this as
        cout<<*(arr+i)<<" , ";//iterating with the concept of pointer
        //arr=arr+1 error
    }
    //Addition(not possible)and Subtraction of pointers-gives how many boxes are there btw 2 address
    int *ptr1=arr+1;
    int *ptr2=arr+7;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<ptr2-ptr1<<endl;//6
    
    
}
