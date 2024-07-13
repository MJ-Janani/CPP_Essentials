
#include <iostream>
using namespace std;

int main() {
    //2D array - array name acts as a row pointer
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<arr<<endl;
    cout<<"Address of element 0,0 (1) "<<&arr[0][0]<<endl;//these both same
    cout<<arr+1<<endl;//will act as row pointer instead of acting as pointer of single element
    cout<<"Address of element 1,0 (5) "<<&arr[1][0]<<endl;//this and arr+1 both same
    /*
    stored in row major form in memory
    address will be 
    arr  > [2000 2004 2008 2012]
    arr+1> [2016....
           [2020....
    */
}
