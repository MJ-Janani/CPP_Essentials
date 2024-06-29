//SYNTAX
//variable=(condition)? expTrue : expFalse;
#include <iostream>
using namespace std;
int main(){
	int temp;
	cout<<"Current temperature: ";
	cin>>temp;

	string current=temp>35?" hot ":" pleasant ";
	cout<<current<<endl;
}
