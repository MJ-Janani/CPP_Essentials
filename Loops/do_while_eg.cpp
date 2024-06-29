/*do while loop - exit controlled loop
while for are entry controlled
condition is checked after the loop
and the loop is executed once before checking the condn is true or not
 */
 #include <iostream>
using namespace std;
 
int main(){
	int number;
	//Read the numbers and when negative number entered read it and stop
	do{
		cin>>number;
		cout<<number<<endl;;
	}
	while(number>=0);
}

/*can be executed in while but the output is bit different
it doesn't read the output if it is negative
it immediately stops*/

int main(){
	int n;
	cout<<"enter n"<<endl;
	cin>>n;//init
	while(n>=0){//condition
		cout<<n<<endl;
		cin>>n;//update

	}
	//if negative is entered it doesnt even enter the loop unlike dowhile
}
