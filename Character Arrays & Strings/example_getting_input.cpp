//Character array getting input
#include <iostream>
#include <cstring>
using namespace std;
int main() {
   char ch;
   //Reading a character
   //cin>>ch;
   ch=cin.get();
   //Output
   if(ch==' '){
       cout<<"You entered a space"<<endl;//never gets executed bcoz cin ignores whitespaces
   }
   else if(ch=='\n'){
        cout<<"You entered a newline "<<endl;
   }
   else{
       cout<<"You entered a character "<<ch<<endl;
   }
}
