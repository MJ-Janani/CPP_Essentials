#include <iostream>
#include <vector>
using namespace std;

void square (int *x, int *y)

{

   *x = (*x) * --(*y);//30*29

}

int main ( )

{

   int number = 30;

   square(&number, &number);//both x and y points to the same address

   cout << number;

   return 0;

}
//ans=870