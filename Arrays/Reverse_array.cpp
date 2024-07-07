
#include <iostream>
using namespace std;

void print(int *array,int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void reverse(int *arr,int n){
    cout<<"Reverse:"<<endl;
  //method 1
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //method 2
    for(int i=0;i<n;i++){
        cout<<arr[n-1 -i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    //create array and get input
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,n);//print function to print all the elements
    reverse(arr,n);
}
