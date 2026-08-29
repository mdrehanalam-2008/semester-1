#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,largest;
	printf("Enter 1st number : ");
	scanf("%d",&a);
	printf("Enter 2nd number : ");
        scanf("%d",&b);
	printf("Enter 3rd number : ");
        scanf("%d",&c);
	largest=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Largest : %d\n",largest);
	getch();
	return 0;
}
