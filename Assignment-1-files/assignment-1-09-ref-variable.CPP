#include <iostream.h>
#include <conio.h>

void computeSphere(float &rad)
	{
   	float vol , surArea;

      vol = (4/3) * 3.14 * (rad * rad * rad);
      surArea = 4 * 3.14 * (rad * rad);

      cout<<"Volume of the sphere is "<<vol<<endl;
      cout<<"Surface area of the sphere is "<<surArea;
   }

void main()
	{
   	float radius;

      cout<<"Enter the radius of the sphere?:"<<endl;
      cin>>radius;

      computeSphere(radius);

      getch();
   }