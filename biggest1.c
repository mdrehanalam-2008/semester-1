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
	if(a<b)
	printf("Bigger number : %d\n",b);
	getch();
	return 0;
}

/*
Output:
Enter 1st number : 76
Enter 2nd number : 91
Bigger number : 91
*/
