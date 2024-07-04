Pointers - 3
void increment (int x)
{
   x = x + 10;
  //cout<<x<<endl;//gives 20 ans
}

int main ( )

{
   int x = 10;

   increment(x);

   cout << x;//10 

   return 0;

}
Predict the output.
  ANS: 10
  
 \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

Pointers - 4
  
void increment (int &x)

{

   x = x + 10;//20

} 

int main ( )

{

   int x = 10;

   increment(x);

   cout << x;//20

   return 0;

}

Predict the output.
  ANS: 20
