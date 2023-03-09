/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1;
   int mark2;
   float average;
   
   printf("Enter the first subject marks : " );
   scanf("%d" , &mark1);
   
   printf("Enter the second subject marks : " );
   scanf("%d" , &mark2);
   
   average = (mark1 + mark2)/ 2 ;
   
   printf("Average is %f \n " , average);
    
  
  return 0;
}

