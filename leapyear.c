#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter the year : ");
	scanf("%d",&a);
	if((a%400==0)||(a%4==0&&a%100!=0))
	printf("It's a Leap year...");
	else
	printf("It's not a Leap year...");
	getch();
	return 0;
}
