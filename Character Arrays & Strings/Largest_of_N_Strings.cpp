
#include <iostream>
#include <cstring>
using namespace std;

int main() {
        //Part 1 to read and store the strings
         //To track the largest- Part 2
        int n;
        cin>>n;
        
        cin.get(); //consumes the space pr extra '/n' we have as integer input
        int prevlen=0;
        char current[1000];
        char largest[1000];
        
        for(int i=0;i<n;i++){
            cin.getline(current,1000,'\n');
            cout<<current<<endl;
            int currentlen=strlen(current);
            if (currentlen>prevlen){
                //update the current length
                prevlen=currentlen;
                //update the largest string
                //largest=current- we cant update a string like this so
                strcpy(largest,current);
            }
            
        }
        cout<<"Largest string is "<<largest <<" with length "<<prevlen<<endl;
     
      
}
