
#include <iostream>
using namespace std;

int main(){
    cout<<"Getting array input:" <<endl;
    int n;
    cin>>n;//no. of elements
    int arr[n];
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
    }
    cout<<"Displaying all the elements:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
