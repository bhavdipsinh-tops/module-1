#include<stdio.h>
 
int main()
 {
   int ptr1,ptr2,num=0;
   
 
   printf("\nEnter two numbers : ");
   scanf("%d %d", &ptr1, &ptr2);
 
   num =ptr1+ptr2;
 
   printf("Sum = %d",num);
   return 0;
}
