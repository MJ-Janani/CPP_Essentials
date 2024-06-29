/*SWITCH CASE 
-evaluated only once
-the value of expression is compared with cases - cant be complex
if it  matches with any one case then it will get executed
replace if else
*/

/*
switch(expression){
case x:
	//code
	break
case y:
	//code 
	break
case z:
	//code
	break
default:
	//code
}
*/
#include <iostream>
using namespace std;
int main(){
	//Simple calculator
	int a,b;
	char op;
	cin>> a >> op >> b;
	switch(op){
	case '+':
		cout<< a+b <<endl;
		break;
	case '-':
		cout << a-b <<endl;
		break;
	case '*':
		cout<< a*b <<endl;
		break;//if break removed both a*b and a/b executes
	case '/':
		cout << a/b <<endl;
		break;//so break imp to come out of switch case block
	default:
		cout<<"Enter valid input!!"<<endl;
	}
}
