#include<stdio.h>
#include<conio.h>
int main()
{
	int f;
	float c;
	printf("Enter temperature in Farenheit : ");
	scanf("%d",&f);
	c=(f-32)/1.8;
	printf("Temperature in Celcius : %g\n",c);
	getch();
	return 0;
}
