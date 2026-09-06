#include<stdio.h>
#include<conio.h>
int main()
{
	float f,c;
	printf("Enter temperature in Farenheit : ");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("Temperature in Celcius : %g\n",c);
	getch();
	return 0;
}

/*
Output:
Enter temperature in Farenheit : 98.8
Temperature in Celcius : 37.1111
*/
