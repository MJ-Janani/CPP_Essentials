/* Sorting using comparator
"functional object"
1 3 0 2 7 5
0 1 2 3 5 7  sort in inc order
7 5 3 2 1 0--then reverse
sort+comparator if (3>0)...put front 3,0 
this comparator either can be user defined or can be inbuilt
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Sort with greater element at the front . It is a functional bject
    
    sort(arr,arr+n,greater<int>());
    
    //print the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
/*
output:
6
7 8 10 3 2 1
10 8 7 3 2 1
*/
