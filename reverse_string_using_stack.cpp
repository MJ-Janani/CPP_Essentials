#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	string num;
	cin >> num;    //Reading input from STDIN
	//cout << "Input number is " << num << endl;	// Writing output to STDOUT
	stack<int>s1;
	for (char c : num){
	    s1.push(c);
	}
	int a=num.length();
	for(int i=0;i<a;i++){
	    num[i]=s1.top();
	    s1.pop();
	}
	cout<<num<<endl;
}
