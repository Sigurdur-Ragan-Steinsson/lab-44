#include <iostream>

using namespace std;
//add your own exception class here
//add functions code here
float square_area(float a)
{
  return a * a;
}

float rectangle_area(float a, float b)
{
  return a * b;
}
int main(void) {
 float a, b, r;
  cout << "Please enter length of square / length of first rectangle side " << endl;
 cin >> a;
  cout << "Please enter length of the second rectangle side " << endl;
 cin >> b;
 try
 {
  float rsquare = square_area(a);
  float rrectangle = rectangle_area(a,b);
  if(rsquare < 0 || rrectangle < 0)
  {
    throw(-1);
  }
  else
  {
    cout << "Area of square = " <<  rsquare << endl;
    cout << "Area of rectangle = "<< rrectangle << endl;
  }
  
 }
   catch(int x)
   {
     cout << "Your input is not valid, area can't be negative. " << endl;
   }
 //add a suitable catch block here
 return 0;
}