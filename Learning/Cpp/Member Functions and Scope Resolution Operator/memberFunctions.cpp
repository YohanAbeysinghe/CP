#include <iostream>
using namespace std;





class Box 
{


public:                           //These variables and functions can be used outside the class.
  

   double length,breadth,height;

   
   //Member functions can be defined inside the class
   //When defining a function inside the class it is considered as an inline function. 
   //Inline functions are not necessary good. Why?
   double getVolume(void) 
   {
      return length * breadth * height;
   }


   //Member Functions can be declared withing the class and defined seperately outside the class.
   void setLength(double len);
   void setBreadth(double bre);
   void setHeight(double hei);


};





//Declared member functions should be defined outside the class. For this 
//"::" Scope resolution operator is used

void Box::setLength(double len)
{
   length = len;
}

void Box::setHeight(double hei)
{
   height = hei;
}

void Box::setBreadth(double bre)
{
   breadth=bre;
}





int main() 
{
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);

   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
   return 0;
}















