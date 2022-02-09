/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{
  float dist,amount;

  printf("Enter the distance = ");  //display "Enter the distance = "
  scanf("%f", &dist);            //read distance
  
  if(dist > 30) //checking whether distance > 30 
  {
    amount = 30 * 50 + (dist - 30) * 40;     //calculating amount
  }
  else if(dist <= 30)      //checking whether distance <= 30 
  {
    amount = dist * 50;  //calculating amount
  }

  printf("Amount = %.2f",amount);   //display amount
  
  return 0;   //end of the main function
}
