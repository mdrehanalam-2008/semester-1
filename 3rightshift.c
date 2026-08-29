#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter the number : ");
	scanf("%d",&a);
	b=a>>3;
	printf("3 times shift right of the given number : %d\n",b);
	getch();
	return 0;
}

/*
Output:
Enter the number : 67
3 times shift right of the given number : 8
*/
