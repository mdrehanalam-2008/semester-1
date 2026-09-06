#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter 1st number : ");
	scanf("%d",&a);
	printf("Enter 2nd number : ");
        scanf("%d",&b);
	if(a>b)
	printf("Bigger number : %d\n",a);
	else
	printf("Bigger number : %d\n",b);
	getch();
	return 0;
}
