#include <iostream>
#include <iomanip>//setprecision is located in this header file
using namespace std;
int main(){
	//find the average of 5 numbers with output having 4 decimal places
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;//1 2 3 4 6
	int sum=(a+b+c+d+e);
	//cout<<(float)sum/5<<endl;//3.0
	cout<<(float) sum/5<<endl;//3.2
	//cout<<fixed<<setprecision(4)<<float(sum/5)<<endl;//3.0000
	cout<<fixed<<setprecision(4)<<(float) sum/5<<endl;//3.2000
	return 0;
}