
#include <iostream>
using namespace std;
int prime_number(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return 1;
            //return false;
        }
    }
    return -1;
    //return true;
}


int main(){
    int num;
    cin>>num;
    int out=prime_number(num);
    if(out==1){
        cout<<"Not a prime"<<endl;
    }
    if(out==-1){
        cout<<"Prime"<<endl;
    }
    //cout<< ( prime_number(num) ? "Prime" : "Not Prime" ) ; 
    
}
