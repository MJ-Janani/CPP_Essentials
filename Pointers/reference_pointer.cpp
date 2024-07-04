/*
REFERENCE POINTER 
 pointer tht holds the value 0
*/
#include <iostream>
using namespace std;
int main(){
    int x=10;
    int &y=x;//y is a reference variable for x
    cout<<x<<endl;//10
    cout<<y<<endl;//10
    x++;//both changes
    cout<<x<<endl;//11
    cout<<y<<endl;//11
    y++;//both changes
    cout<<x<<endl;//12
    cout<<y<<endl;//12

}
