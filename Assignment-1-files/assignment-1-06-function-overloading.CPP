#include <iostream.h>
#include <conio.h>

// same function name i.e. function overloading

void maximum(float num1 , float num2 , float num3)
	{
   	if(num1>num2 && num1>num3)
      	{
         	cout<<num1<<" is the maximum one.";
         }
      else if(num2>num3 && num2>num3)
      	{
         	cout<<num2<<" is the maximum one.";
         }
      else
      	{
         	cout<<num3<<" is the maximum one.";
         }
   }

void maximum(float num1 , float num2)
	{
   	if(num1>num2)
      	{
         	cout<<num1<<" is the greater one.";
         }
      else
      	{
         	cout<<num2<<" is the greater one.";
         }
   }

void main()
	{
   	float num1 , num2 , num3;

      cout<<"Enter three float numbers?:"<<endl;
      cin>>num1>>num2>>num3;

      // for maximum of two numbers
      cout<<"In case of "<<num1<<" and "<<num2<<endl;
      maximum(num1 , num2);

      // for maximum of three numbers
      cout<<endl<<"In case of "<<num1<<" , "<<num2<<" and "<<num3<<endl;
      maximum(num1 , num2 , num3);

      getch();
   }