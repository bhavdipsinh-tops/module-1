#include<stdio.h>
#include<math.h>
int  main()
{
	float p,t,r,si,ci;
	
	printf("enter principel amount P:");
	scanf("%f",&p);
	
	 printf("enter time in year  t:");
	scanf("%f",&t);
	
	printf("enter rate in percent  r:");
	scanf("%f",&r);
	
	si=p*r*t/100;
	
	ci=p*(pow(1+r/100,t)-1);
	
	printf(" simpel interest =%.3f \n",si);	
	
	printf(" compound interest =%.3f \n",ci);
	return 0;
	
}
