#include <cs50.h>
#include <stdio.h>
int main(void)
{
    //define h - prompt user input for height
    int h;
    do
    {
        h = get_int("Height: ");
    }
    //if h is between 1 - 8, run loop, otherwise, prompt again
    while (h < 1 || h > 8);
    for (int r = 0; r < h; r++)
    {
        //print spaces  
        for (int s = 0; s < h - r - 1; s++)
             printf(" ");
        //print hashes    
        for (int n = 0; n < r + 1; n++)
                {
                printf("#");
                }
      //line break    
        printf("\n");
    
    }
}
