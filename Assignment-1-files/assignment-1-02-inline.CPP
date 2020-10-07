#include <iostream.h>
#include <conio.h>

inline void square(float num);

void main()
	{
   	float numb;
      cout<<"Enter a number to calculate it's sqaure?:"<<endl;
      cin>>numb;

   	square(numb);
      getch();
   }

void square(float num)
	{
   	float sqr;

      sqr = num * num;

      cout<<"The square of the provided number "<<num<<" is "<<sqr;
   }