#include <iostream>
using namespace std;
int main(){
	int a=10; int y;
	a++;
	cout<<a<<" ";//post increment//11
	++a;
	cout<<a<<" ";//pre increment//12
	//here a++ and ++a gives same ans
	//but when done with assignment
	y=a++;//1st assignment i.e y=a then inc a++
	cout<<"y , a = "<< y << a <<endl;
	//so y=12 and a =13
	y=++a;
	cout<<"y , a = "<< y << a <<endl;//1st inc a=14 and then assn y=14
	///////////////////////////////////////
	//Bitwise operators
	cout<<(5&7)<<endl;//101&111=101 ----ans 5
	//in memory stored as 32 bits
	cout<<(5|2)<<endl;//101|010=111-----ans 7
	cout<<(5^3)<<endl;//bitwise xor
	cout<<(~0)<<endl;//bitwise not
}
