//Character array creation and printing
#include <iostream>
#include <cstring>
using namespace std;
int main() {
   char arr[100]="hello";
   //assign some new value to it
   strcpy(arr,"hi everyone");//(dest,source)
   
   //length - how long the data is
   cout<<"Length of the string is "<<strlen(arr)<<endl;//11
   cout<<"Size of the array is "<<sizeof(arr)<<endl;//100
   
   //print
   cout<< arr<<endl;//hi everyone
}
