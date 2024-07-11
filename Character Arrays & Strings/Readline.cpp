
#include <iostream>
using namespace std;
//Read a character array without using library functions such as cin
void readLine(char *arr,int len,int delim){
    int cnt=0;
    char ch;
    while(true){
        ch=cin.get();
        arr[cnt]=ch;
        if (ch==delim || ch==len-1){//read every charcter and stop when we get a character 
            break;
        }
        cnt++;
    }
    arr[cnt]='\0';
    cout<<cnt<<endl;//11
    //this is the func behind inbuilt functioncin.getline()
}
int main() {
    //line terminates at'\n' 
    char arr[100];
    readLine(arr,100,'\n');
    
    
}
