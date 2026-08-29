#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,sum;
	float avg;
	printf("Enter 1st number : ");
	scanf("%d",&a);
	printf("Enter 2nd number : ");
        scanf("%d",&b);
	printf("Enter 3rd number : ");
        scanf("%d",&c);
	sum=a+b+c;
	printf("Sum : %d\n",sum);
	avg=(a+b+c)/3.0;
	printf("Average : %f\n",avg);
	getch();
	return 0;
}

/*
Output:
Enter 1st number : 56
Enter 2nd number : 45
Enter 3rd number : 51
Sum : 152
Average : 50.666668
*/
