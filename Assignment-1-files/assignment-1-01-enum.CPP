#include <iostream.h>
#include <conio.h>

// remember , enum should be declare inside the main body.


void main()
	{

      enum Month
			{
      		jan = 1,
      		feb,
      		march,
            april,
      		may,
      		june,
            july,
      		aug,
            sep,
      		oct,
      		nov,
      		dec
   		};

   	Month month1 , month2 , month3 , month4;

      //assigning values of the enumerators
      month1 = jan;
      month2 = march;
      month3 = sep;
      month4 = dec;

      cout<<"value assigned to month1 from enumerator jan is:"<<month1<<endl;
      cout<<"value assigned to month2 from enumerator march is:"<<month2<<endl;
      cout<<"value assigned to month3 from enumerator sep is:"<<month3<<endl;
      cout<<"value assigned to month4 from enumerator dec is:"<<month4<<endl;

      getch();
   }