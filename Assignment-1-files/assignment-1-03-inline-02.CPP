#include <iostream.h>
#include <conio.h>

inline void volCube(float side)
	{
   	float vol;
      vol = side * side * side;

      cout<<"Volume of the cube with sides "<<side<<" is "<<vol;
   }

void main()
	{
   	float side;
      cout<<"Enter the value of the side of the cube?:"<<endl;
      cin>>side;

      volCube(side);
      getch();
   }

