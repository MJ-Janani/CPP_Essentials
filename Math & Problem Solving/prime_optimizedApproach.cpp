/*PRIME NUMBERS - ROOT N OPTIMIZED APPROACH
N divisors
30=1,2,3,5,6,10,15,30 - divisors occur in pairs
1 * 30 = 30//ignore
2 * 15 = 30
3 * 10 = 30
5 * 6 = 30
small div(range 2 to <=rootN) * big div(>=rootN)
if small exists big also exists...without small it doesnt 
only root N iterations
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


int main(){
    int num;
    cin>>num;
    cout<< ( prime_optimised(num) ? "Prime" : "Not Prime" ) ; 
    
}
