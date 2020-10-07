#include <iostream.h>
#include <conio.h>

// for volume of cube
void volume(float side)
	{
   	float vol1;
      vol1 = side * side * side;

      cout<<"Volume of the cube is "<<vol1<<endl;
   }

// for volume of cylinder
void volume(float rad , float height)
	{
   	float vol2;
      vol2 = 3.14 * (rad * rad) * height;

      cout<<"Volume of the cylinder is "<<vol2<<endl;
   }

// for volume of the rectangular box
void volume(float height , float width , float breadth)
	{
   	float vol3;
      vol3 = height * width * breadth;

      cout<<"Volume of the rectangular box is "<<vol3;
   }

void main()
	{
   	float side , rad , cylHeight , recHeight , recWidth , recBreadth;

      cout<<"Enter value for the side of the cube?:"<<endl;
      cin>>side;

      cout<<"Enter value for the radius and height of the cylinder?:"<<endl;
      cin>>rad>>cylHeight;

      cout<<"Enter value for the height , breadth and width of the cube?:"<<endl;
      cin>>recHeight>>recBreadth>>recWidth;

      // for volume of cube
      volume(side);

      // for volume of the cylinder
      volume(rad , cylHeight);

      // for volume of the rectangular box
      volume(recHeight , recWidth , recBreadth);

      getch();


   }