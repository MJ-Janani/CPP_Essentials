#include <iostream>
using namespace std;
int main(){
	int marks;
	cin>>marks;
	if (marks>80){
		cout<<"Grade A"<<endl;//while the 1st if block executes the other blocks will not be
	}
	else if (marks>60){
		cout<<"Grade B"<<endl;
	}
	else if (marks>40){
		cout<<"Grade C"<<endl;
	}
	else {
		cout<<"Grade D"<<endl;
	}
}