#include <iostream>
using namespace std;

void play_music();
//Forward Declaration
int main(){
play_music();//called before declared causes compile error
}

void play_music(){
  cout<<"Enter your favorite song number: "<<endl;
  int song;
  cin>>song;
  cout<<"Playing song number "<<song;
}//once defined
