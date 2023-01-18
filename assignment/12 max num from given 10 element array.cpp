#include<stdio.h>

int main()
 {

int arr[10];
int i;
int max=0;
 

printf("\n Enter 10 numbers : \n\n");
 
 for(i = 0; i<10;i++) {
     
      printf("Enter no. %d   : \n",i+1);
      scanf("%d",&arr[i]);
      
    
     
 }
 
 for(i = 0; i<10;i++) 
 {
     
       if(arr[i]>=max) 
	   {
           
           max = arr[i];
       }

}
 printf("Max number : %d",max);
 
return 0;
   
 }
