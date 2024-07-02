#include <iostream>
using namespace std;

void play_music(int songId){//variables defined inside function=parameters
  cout<<"Playing song number "<<songId<<endl;
} 
int main(){
    play_music(1);
    play_music(2);
    play_music(3);
    return 0;
}
/*OUTPUT:
Playing song number 1
Playing song number 2
Playing song number 3


=== Code Execution Successful ===
*/
