//used to explicitly terminate a loop based on some condn
/*
while(condn_1){
	if(condn_2){
		break;
	}
}
*/


#include <iostream>
using namespace std;
 
int main(){
	//to check prime or not
	int number;
	cin>>number;
	int i;
	for (i=2;i<number;i++){
		if (number%i==0){
			break;
		}
	}
	if(i==number){
		cout<<"Prime"<<endl;

	}
	else{
		cout<<"Not prime"<<endl;
	}
	
}