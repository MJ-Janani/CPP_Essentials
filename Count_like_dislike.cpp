#include<bits/stdc++.h>
using namespace std;

int count_like_dislike (string A, string P) {
   int a=A.size();//sizeof(A) gives the size of string object itself
   int b=P.size();//gives size of P string
   int cnt=0;
   for(int i=0;i<min(a,b);i++){
    if(A[i]==P[i]){
        cnt++;
    }
   }
   return cnt;
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    string A="0101010";
    //cin >> A;
    string P="10010110";
    //cin >> P;

    int out_;
    out_ = count_like_dislike(A, P);
    cout << out_;
}
