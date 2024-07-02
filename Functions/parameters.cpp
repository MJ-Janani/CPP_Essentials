#include <iostream>
using namespace std;

void play_music(int songId, float duration){//variables defined inside function=parameters
  cout<<"Playing song number "<< songId <<" for "<<duration<< " minutes"<<endl;
} 
int main(){
    play_music(1,5.5);
    play_music(2,3);
    play_music(3,4.2);
    return 0;
}
/*OUTPUT:
Playing song number 1 for 5.5minutes
Playing song number 2 for 3minutes
Playing song number 3 for 4.2minutes


=== Code Execution Successful ===
*/
