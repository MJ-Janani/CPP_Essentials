
#include <iostream>
using namespace std;

void print(int *array,int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }
}

int linearSearch(int *arr,int n,int key){
    for(int i=0;i<n;i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;//returns -1 if key not found
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
    
    int key;
    cout<<"Enter key to be found:"<<endl;
    cin>>key;
    cout<<linearSearch(arr,n,key);
}
