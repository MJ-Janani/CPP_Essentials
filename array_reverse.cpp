#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	//cout << "Input number is " << num << endl;	// Writing output to STDOUT
	int arr[num];
	for(int i=0;i<num;i++){
	    cin>>arr[i];
	}
	for(int i=num-1;i>=0;i--){
	    cout<<arr[i]<<endl;
	}
	
}
