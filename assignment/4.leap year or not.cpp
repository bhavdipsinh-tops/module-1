#include<stdio.h>
int main()
{
	int year;
	
	printf("enter a year : ");
	scanf("%d",&year);
	
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			  printf("%d ia s leap year.",year);
			else
			  printf("%d is a not leap year.",year);
			
		}
		else
		printf("%d is leap year.",year);
	}
	else
	printf("%d is not a leap year.",year);
	
	
	return 0;
}
