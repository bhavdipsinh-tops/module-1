#include<stdio.h>
int main()

{  
   int m;
   
   printf("enter marks :");
   scanf("%d",&m);
   
     if(m>=35 && m<=50)
     {
     printf("Pass class\n");
	 }
	else if(m>=50 && m<=60)
	 {
	 printf("Second class\n");
	 	
	 }
	else if(m<=75 && m>=60)
	 {
	 printf("First class\n");
	 }
	else if(m<=100 && m>=75)
	{
		printf("Distiction\n");
	}
	else
	 {
	 printf("fail");
	 }
	
	
	return 0;    
}

