/* Pass a 2D - ARRAY as function
1  2  3  4
5  6  7  8
9 10 11 12
=> 1 5 9 10 6 2 3 7 11 12 8 4
*/
#include <iostream>
using namespace std;
//columns ismust
void waveprint(int arr[][100], int rows,int cols){
//create var tht holds the 2d arrays, also the rows and cols
//Iterate on every column
    for(int col=0;col<cols;col++){//if cols are even go frm top to bottom 
        if(col%2==0){
            for(int row=0;row<rows;row++){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row=rows-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}

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
    cout<<"2D Array :"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;
    waveprint(arr,rows,cols);//calling the function
    return 0;
}
/* 
  4 5
  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
  2D Array :
1   2   3   4   5   
6   7   8   9   10   
11   12   13   14   15   
16   17   18   19   20   

1 6 11 16 17 12 7 2 3 8 13 18 19 14 9 4 5 10 15 20 
  */
