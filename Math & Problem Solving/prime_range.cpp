/*PRIME NUMBERS - Given 2 numbers print all the prime present in tht range
*/
#include <iostream>
using namespace std;
int prime_optimised(int num){
    if(num==0||num==1){
        return false;
    }
    for(int i=2;i*i<=num;i++){//i=root num(using func) or i^2=num
        if(num%i==0){
            return false;
        }
    }
    return true;
}

void printPrimes(int a, int b){
    for(int i=a;i<=b;i++){
        if(prime_optimised(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    
    
}

int main(){
    //int num;
    //cin>>num;
    //cout<< ( prime_optimised(num) ? "Prime" : "Not Prime" ) ; 
    printPrimes(10,100);
}
