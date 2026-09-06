#include<stdio.h>
#include<conio.h>
int main()
{
	float r,perimeter,area;
	printf("Enter the radius of the circle : ");
	scanf("%f",&r);
	perimeter=2*3.14*r;
	area=3.14*r*r;
	printf("Perimeter of the circle : %g\n",perimeter);
	printf("Area of the circle : %g\n",area);
	getch();
	return 0;
}

/*
Output:
Enter the radius of the circle : 10
Perimeter of the circle : 62.8
Area of the circle : 314
*/
