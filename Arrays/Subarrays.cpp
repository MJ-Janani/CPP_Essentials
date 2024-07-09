// SUBARRAYS- small continuous part of an array
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};//2,3,4 is an subarray but 2,4 is not
    /* index=0 : 1, 12 , 123 , 1234 , 12345
       index=1: 2, 23 , 234 , 2345
       index=2 : 3 , 34 , 345 
       index=3 : 4 , 45
       index=4 : 5
       Total no. of subarrays:5+4+3+2+1=15 (sum of 1st n natural no.s)
       n(n+1)/2
       to print all the subarrays
       start 0 to n-1
       end>=start
    */
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){//start 0 to n-1
        for(int j=i;j<n;j++){//end from ith to n-1(last)
            for(int k=i;k<=j;k++){//printing the subarrays as arrays
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
/*
OUTPUT
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

2 
2 3 
2 3 4 
2 3 4 5 

3 
3 4 
3 4 5 

4 
4 5 

5 
*/
