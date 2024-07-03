//N factorial
#include <iostream>
using namespace std;
int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
int main(){
	int n=10;
	int f= factorial(n);//storing in bucket then printing
	cout<<"The factorial of "<<n<<" is "<<f<<endl;
	cout<<"The factorial is "<<factorial(5)<<endl;
}


/*
The factorial of 10 is 3628800
The factorial is 120
*/
