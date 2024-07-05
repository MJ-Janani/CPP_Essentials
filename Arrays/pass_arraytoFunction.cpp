
#include <iostream>
using namespace std;
//passing array to function
void array(int *myArray,int n){// pointer variable equates to arr
    cout<<myArray<<endl;//stores the address
    cout<<sizeof(myArray)<<endl;//8 - size of myArray pointer
    for(int i=0;i<n;i++){
        cout<<myArray[i]<<endl;//myArray(addr)+i//iterates and prints
    }
}
int main() {
    //take input
    int n;
    cin>>n;
    //create array
    int arr[n];//5
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arr<<endl;//address
    cout<<sizeof(arr)<<endl;//20 (5*4)
    array(arr,n);//calling the function
  
}
