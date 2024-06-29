#include <iostream>
using namespace std;
 //break breaks the loop outside continue breaks the loop inside
int main(){
	int i=0;
	while(i<=20){
		if(i%7==0){
			cout<<i<<"is multiple of 7"<<endl;
			i++;
			continue;//once multiple of 7 is reached...goes back to while loop
		}
		cout<<i<<endl;
		i++;
	}
	return 0;

}