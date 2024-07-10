//Character array getting input
#include <iostream>
#include <cstring>
using namespace std;
int main() {
   char arr[100];
   char arr2[100];
   //Input
   //cin>>arr;//can get entire word
   //but prints only hello in hello world
   //cout<<arr<<endl;  
   cout<<"Enter arr2 "<<endl;
   cin.getline(arr2,100,'$');//(arr,capacity,arg-optional)//reads everything in new line until it gets $  
   cout<<arr2<<endl;
}
