#include <iostream>
using namespace std;
//Read n numbers and find their sum
int main(){
	int n;
	cin>>n;
	int i=0;
	int sum=0;
	while(i<n){
		int number;
		cin>>number;
		sum=sum+number;
		i++;
	}
	cout<<"The sum is of "<<n<<" numbers is "<<sum<<endl;
}