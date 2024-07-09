/*Introduction to Sorting
******TIME COMPLEXITY : NlogN ********
arrange data in particular order(inc or dec)
not only numbers
eg: books arranged based on price , or based on pages ,etc. 
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];//variable length array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Sorting inbuilt func sort [start,end+1) start is incl,end is not included so +1
    sort(arr,arr+n);//(arr,arr+(n-1)+1)
    sort(arr+1,arr+n);//if want to sort frm 1st index
    
    //print the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
/*
output:
5
3 5 4 2 1
1 2 3 4 5 
*/
