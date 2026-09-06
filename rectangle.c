#include<stdio.h>
#include<conio.h>
int main()
{
	int l,b,perimeter,area;
	printf("Enter the length of rectangle : ");
	scanf("%d",&l);
	printf("Enter the breadth of rectangle : ");
        scanf("%d",&b);
	perimeter=2*(l+b);
	area=l*b;
	printf("Perimeter of the rectangle : %d\n",perimeter);
	printf("Area of the rectangle : %d\n",area);
	getch();
	return 0;
}

/*
Output:
Enter the length of rectangle : 8
Enter the breadth of rectangle : 6
Perimeter of the rectangle : 28
Area of the rectangle : 48
*/
