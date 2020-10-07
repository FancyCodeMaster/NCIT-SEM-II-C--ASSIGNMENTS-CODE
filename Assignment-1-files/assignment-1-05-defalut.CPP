#include <iostream.h>
#include <conio.h>

void SI(float prin , float time , float rate = 1.5)
	{
   	float simpInt;
      simpInt = (prin * time * rate)/100;

      cout<<"The simple interest is: "<<simpInt;

   }

void main()
	{
   	float prin , time;

      cout<<"Enter the principal amount?"<<endl;
      cin>>prin;

      cout<<"Enter the time?"<<endl;
      cin>>time;

      // here , we don't have to add rate as the argument coz of the default values.
      SI(prin , time);

      getch();
   }
