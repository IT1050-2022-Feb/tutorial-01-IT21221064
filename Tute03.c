/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int i,num,sum=0;  

  printf("Enter the number: ");  //display "Enter the number: "
  scanf("%d", &num);            //read num
  for(i = 1;i <= num;i++)
  {
    sum = i + sum;     //calculanting sum
  }
  printf("Sum = %d",sum);    //display sum
  
  return 0;   //end of the main function
}

