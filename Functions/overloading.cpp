//same function having different number of parameters
#include <iostream>
using namespace std;
int area(int l,int b){
	return l*b;
}
int area(int l){
	return l*l;
}

int main(){
	cout<<area(5,3)<<endl;//mapped to 1st-15
	cout<<area(5)<<endl;//mapped to 2nd-25
}