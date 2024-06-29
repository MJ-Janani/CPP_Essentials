#include <iostream>
using namespace std;
int main(){
	//Change of resulting datatype - TYpecasting
	cout<<(5/3)<<endl;//(int/int=int)/1
	//implicit- the compiler automatically decides itself
	cout<<(5/3.0)<<endl;//(int/float=float)/1.667

	char letter='A';//letter bucket datatype is char
	//using IMPLICIT TYPECASTING
	cout<<letter+1<<endl;//65(char)+1(int)=gives int i.e 66
	//this 66 is stored in char data type
	cout<<letter<<endl;//so A
	letter=letter+1;//char+int=int 
	//i.e 67 stored in letter(char datatype again-B)
	cout<<letter<<endl;//B

	char ch=68;
	cout<<ch<<endl;//D

	cout<<(true+6)<<endl;//7
	//bool+int=int
	cout<<(false+6)<<endl;//6

	//priority-float,int,char,bool
	return 0;
}