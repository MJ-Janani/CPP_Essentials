
#include <iostream>
using namespace std;

void print(int *array,int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
//reverse without creating a new array
void reverseInPlace(int *arr,int n){
    cout<<"Reverse:"<<endl;
    int start=0;int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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
    cout<<"Print before reversing the array"<<endl;
    print(arr,n);//print function to print all the elements
    cout<<"Print after reversing the array"<<endl;
    reverseInPlace(arr,n);
    
    
}
