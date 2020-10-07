#include <iostream.h>
#include <conio.h>

// for area of the cube
void area(float side)
	{
   	float ar;

      ar = side * side;

      cout<<"Area of the cube is "<<ar<<endl;
   }

// for area of the cylinder
void area(int rad , float height , float pi=3.14)
	{
   	float ar;

      ar = (2 * pi * rad * height) + (2 * pi * rad * rad);

      cout<<"Area of the cylinder is "<<ar<<endl;
   }

// for area of the rectangular box
void area(float length , float width)
	{
   	float ar;

      ar = length * width;

      cout<<"Area of the rectangular box is "<<ar<<endl;
   }

void main()
	{
   	float side , height , length , width;
      int rad;

      cout<<"Enter side of the cube?"<<endl;
      cin>>side;

      cout<<"Enter radius and height of the cylinder?"<<endl;
      cin>>rad>>height;

      cout<<"Enter length and width of the rectangular box?"<<endl;
      cin>>length>>width;

      // for area of the cube
      area(side);

      // for area of the cylinder
      area(rad , height);

      // for area of the rectangular box
      area(length , width);

      getch();
   }
