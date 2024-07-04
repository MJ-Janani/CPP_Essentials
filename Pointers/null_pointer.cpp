/*
 NULL POINTER 
 pointer tht holds the value 0
*/
#include <iostream>
using namespace std;
int main(){
    int x=10;
    int * xptr=&x;
    cout<<xptr<<endl;//address
    xptr=0;
    int * yptr=NULL;//we can initialize our pointer variables to null
    int * zptr=NULL;
    if(xptr==NULL){
        cout<<"Yes it is a null pointer";
    }
    
}
