//Character arrays
#include <iostream>
using namespace std;
int main() {
   char arr[100];//abc other till 100 are garbage value
   arr[0]='a';
   arr[1]='b';
   arr[2]='c';
   cout<<arr[0]<<endl;
   cout<<arr[1]<<endl;
   cout<<arr[2]<<endl;
   cout<<arr<<endl;//address is expected but we get the contents abc?? (with garbage)
   char *ptr=arr;
   cout<<ptr<<endl;//also address is expected but we dont get
   cout<<(void *)ptr<<endl;//address received- correct version
   cout<<(char *)ptr<<endl;//abc
   cout<<(int *)ptr<<endl;//anything other than char data type gives adddress
   //more ways to create character array
   char a[]={'x','y','z'};
   cout<<sizeof(a)<<endl;//3 - a bucket of char takes 1 byte of storage 
   cout<<a<<endl;//xyzabc??...abc are garbage letters so
   char b[]={'x','y','z','\0'};//char arrays must be null terminated
   cout<<b<<endl;//xyz
   //Another way
   char c[]="hello";//double quotes will automatically null terminated
   cout<<sizeof(c)<<endl;//6
   cout<<c<<endl;//hello
}
