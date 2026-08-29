#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
        scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping : \n");
	printf("A : %d\n",a);
	printf("B : %d\n",b);
	getch();
	return 0;
}
