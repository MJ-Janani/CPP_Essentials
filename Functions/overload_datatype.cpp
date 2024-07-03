#include <iostream>
#include <vector>
using namespace std;

void function(int i){
	cout<<i<<endl;
}
void function(vector<int> a){
	for(int x:a){//for every element x in a
		cout<< x <<",";
	}
	cout<<endl;
}
void function(char *arr){
	cout<<arr;
}

int main(){
	int a=5;
	vector<int> arr={1,2,3,4,5};
	char carr[]="abcd"<<endl;

	function(a);
	function(arr);
	function(carr);
}
/*
output:
5
1,2,3,4,5,
abcd
*/