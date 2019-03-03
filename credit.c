// Checks credit card number validity
#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    long cardno = get_long("Enter card number: ");
    // Luhn's Algorithm
    int dig1 = ((cardno % 100) / 10) * 2;
    int dig2 = ((cardno % 10000) / 1000) * 2;
    int dig3 = ((cardno % 1000000) / 100000) * 2;
    int dig4 = ((cardno % 100000000) / 10000000) * 2;
    int dig5 = ((cardno % 10000000000) / 1000000000) * 2;
    int dig6 = ((cardno % 1000000000000) / 100000000000) * 2;
    int dig7 = ((cardno % 100000000000000) / 10000000000000) * 2;
    int dig8 = ((cardno % 10000000000000000) / 1000000000000000) * 2;
    int mult2 = ((dig1 % 10) + (dig1 / 10) 
                 + (dig2 % 10) + (dig2 / 10)
                 + (dig3 % 10) + (dig3 / 10)
                 + (dig4 % 10) + (dig4 / 10)
                 + (dig5 % 10) + (dig5 / 10)
                 + (dig6 % 10) + (dig6 / 10)
                 + (dig7 % 10) + (dig7 / 10)
                 + (dig8 % 10) + (dig8 / 10));
    int checksum = mult2 + ((cardno % 10) 
                + ((cardno % 1000) / 100)
                + ((cardno % 100000)/ 10000)
                + ((cardno % 10000000) / 1000000)
                + ((cardno % 1000000000) / 100000000)
                + ((cardno % 100000000000) / 10000000000)
                + ((cardno % 10000000000000) / 1000000000000)
                + ((cardno % 1000000000000000) / 100000000000000));
    // Check validity of card number
    if (checksum % 10 > 0)
    {
        printf("INVALID\n");
    }
    // Determine type of card
    else if (cardno > 339999999999999 && cardno < 350000000000000)    
    {
        printf("Amex\n");
    }
    else if (cardno > 369999999999999 && cardno < 380000000000000)
    {
        printf("Amex\n");
    }
    else if (cardno > 5099999999999999 && cardno < 5800000000000000)
    {
        printf("Mastercard\n");
    }
    else if (cardno > 3999999999999 && cardno < 5000000000000) 
    {
        printf("Visa\n");
    }
    else if (cardno > 3999999999999999 && cardno < 5000000000000000)
    {
        printf("Visa\n");
    }
    else 
    {
        printf("INVALID\n");
    }
}

