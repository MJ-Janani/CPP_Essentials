/* 2D - ARRAYS - applications
tic tac tor game
chess,sudoku
pixels in image
tabular data 
*/
#include <iostream>
using namespace std;
int main(){
    int arr[100][100];//0 to 99 rows and columns
    int rows,cols;
    cin>>rows>>cols;
    //Read a 2D array
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    //Print a 2D array
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
    /*2 D arrays is stored in row major form 
    (100*100 array)
    row 1  1,2,3,4,----------------remaining buckets are unused
    row 2
    .
    .
    .
    row 100 
    MEMORY VIEW: actual storage is linear of size 100*100
    row 1 | row 2 |.......row 100
    */
}
/*
output:
3 3
1 2 3 4 5 6 7 8 9
1   2   3   
4   5   6   
7   8   9
*/
