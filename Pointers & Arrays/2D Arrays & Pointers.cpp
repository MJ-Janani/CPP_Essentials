
#include <iostream>
using namespace std;
/*Passing 1d array as function  int arr[] or int *arr
both are same - pointer tht holds the address of arrray
*/
void accept2Darray(int (*ptr)[4]){//row pointer tht points to 3 rows this and int arr[][4] are same
    cout<<"Row 0 address "<< ptr<<endl;//same as arr
    cout<<"Row 1 address "<<ptr+1<<endl;//same as arr+1
    int i=1;
    int j=2;
    cout<<ptr[i][j]<<endl;//same as arr[i][j]
    cout<< *(*(ptr+i)+j)<<endl;//both same ans =7 
    //same as *(*(arr+i)+j)
void print2DArray(int arr[][4],int rows,int cols){
    //to do
}    
}
/*to access the elements ptr+i nxt address in tht row 
to iterate thru column *(ptr+i)+j...gives the address again so 
*(*(ptr+i)+j)
*/

int main() {
    //2D arrays and Pointers
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<arr<<endl;
    cout<<"Address of element 0,0 (1) "<<&arr[0][0]<<endl;//these both same
    cout<<arr+1<<endl;
    cout<<"Address of element 1,0 (5) "<<&arr[1][0]<<endl;
    accept2Darray(arr);
}
