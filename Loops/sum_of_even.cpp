#include <iostream>
using namespace std;
//Read N numbers and find sum of even numbers
int main(){
	int i;
	int n;
	cin>>n;
	int sum=0;
	for(i=1;i<=n;i++){
		int number;
		cin>>number;
		if(number%2==0){
			sum=sum+number;
		}

	}
	cout<<"The sum of even numbers is "<<sum<<endl;

}