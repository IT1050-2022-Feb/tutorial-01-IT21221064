/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  int n1,n2,sum;
  float avg;

  printf("Enter number 1 : ");  //display "Enter number 1 : "
  scanf("%d", &n1);             // read number 1
  printf("Enter number 2 : ");   //display "Enter number 2 : "   
  scanf("%d", &n2);             // read number 2       
  sum = n1 + n2;         //calculate sum
  avg = sum/2.0;       //calculate average    
  printf("Average = %.2f",avg);  //display average 

  return 0;   // end of the main function
}

