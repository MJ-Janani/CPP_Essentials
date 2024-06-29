#include <iostream>
using namespace std;
//for loop is similar to while
int main(){

	for(int i=1;i<=5;i++){//i exists only inside the for loop
		cout<<i<<endl;
	}

	int i;//if we want to use it outside declare it outside
	for(i=1;i<=5;i++){
		cout<<i<<endl;
	}
	cout<<"After the loop: "<<i<<endl;
//equal to while loop
    i=1; //initialization
	for( ;i<=5; ){ //while(i<=5)
		cout<<i<<endl;
		i++; //update
	}
	cout<<"After the loop: "<<i<<endl;
}