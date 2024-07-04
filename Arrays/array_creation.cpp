

#include <iostream>
using namespace std;

int main(){
    int arr[100];
    cout<<arr[30]<<endl;
    cout<<arr[55]<<endl;//returns some garbage value
    
    int n=sizeof(arr)/sizeof(int);
    cout<<n<<endl;//400/4=100
    
    cout<<"print all elements in array:"<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
