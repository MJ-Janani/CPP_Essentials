/*DATATYPE MODIFIERS
long , short , signed ,  unsigned
long int means >= int
1st bit 1 - negative
0 - positive , other bits magnitude
signed int=int(by default)
unsigned - all 32 bits store the data no sign
unsigned long int - upto 64 bits (alldata)*/
#include <iostream>
using namespace std;
int main(){
	int marks=10;
	long int number=1213658902674578;
	int temp=number; //cannot store a large value in
	//small bucket- OVERFLOW occurs
	cout<<number<<endl;
	cout<<temp<<endl;//wrong value
	cout<<sizeof(int)<<endl;//4
	cout<<sizeof(long int)<<endl;//8
	cout<<sizeof(short)<<endl;
}
