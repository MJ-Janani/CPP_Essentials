#include <iostream>
using namespace std;
int main(){
	int x, y;

	x = 5;

	y = ++x * ++x;//first ++x - 6
	//second ++x - 7 so x=7 now
	//y=7*7=49

	cout << x << y;//749

 

	y = x++ * ++x;//first x++(post inc) - 8
	//second ++x pre inc - 9
	//y=7*9=63

	cout << x << y;//963
}
