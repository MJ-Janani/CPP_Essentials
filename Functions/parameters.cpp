#include <iostream>
using namespace std;

void play_music(int songId, float duration=10){//variables defined inside function=parameters
  cout<<"Playing song number "<< songId <<" for "<<duration<< " minutes"<<endl;
} 
int main(){
    play_music(1,5.5);//arguments
    play_music(2,3);
    play_music(3);//default value is assigned to the duration i.e.10
    return 0;
}
/*OUTPUT:
Playing song number 1 for 5.5 minutes
Playing song number 2 for 3 minutes
Playing song number 3 for 10 minutes

*/
