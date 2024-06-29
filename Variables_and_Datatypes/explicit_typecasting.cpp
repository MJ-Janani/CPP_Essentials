#include <iostream>
using namespace std;
int main(){
	//we explicitly provie the type we want say,

	cout<<(float) 5/3<<endl;//int/int=int//as float-1.66667

	char ch='A';
	cout<<float(ch+1)<<endl;//implicitly it takes as char+int=int
	//as explicitly float is mentioned//66

	cout<<(bool) 5+1<<endl;//bool any non zero=true(1)
	//2
	return 0;
}