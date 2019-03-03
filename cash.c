#include <cs50.h>
#include <math.h>
#include <stdio.h>
int main(void)
{
    float change;
    // prompt for change until user enters non-negative value
    do
    {
        change = get_float("How much change? ");
    }
      while
      (change < 0);
   // convert change to cents, round and convert to integer 
   int cents = round(change * 100);
      printf("%.0i cents owed \n", cents);
   // declare coins to begin count
    int coins = 0;
   
   // add number of quarters 
   coins += cents / 25;
   cents = cents % 25;
   // add number of dimes
   coins += cents / 10;
   cents = cents % 10;
   //add number of nickels
   coins += cents / 5;
   cents = cents % 5;
   //add number of pennies
   coins += cents / 1;
   cents = cents % 1;
   
  //print number of coins used
    printf("%i coins\n", coins);
}
