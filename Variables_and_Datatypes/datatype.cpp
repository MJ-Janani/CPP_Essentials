#include <iostream>
using namespace std;
int main(){
	int marks;
	cout<<sizeof(marks)<<endl;//int//ans =4 (bytes)=32 bits
	cout<<sizeof(float)<<endl;//4
	cout<<sizeof(char)<<endl;//ans=1
	/*8bits=2^8 =256 possibilities 
	so we can represent all possible letters like a=65,b=66..*/
	cout<<sizeof(double)<<endl;//ans=8 (bytes)=64 bits(higher precision)
	cout<<sizeof(bool)<<endl;//ans=1
	//true=00000001 false=00000000
	return 0;

}
