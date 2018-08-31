/*******
*   Sebastien Bianchin
*
*   CS50 - Pset1 - mario
*
*   prints a half pyramid no higher than 23 blocks
*******/

#include <stdio.h>
#include <cs50.h>  // CS50
//#include <iostream>

int main(void){

    int height;

     do
    {
        printf("Please specify the height of the pyramid: ");
        height = GetInt(); // CS50
        //std::cin >> height;
    }
    while (height < 0 || height > 23);

    for(int line=0; line<height; line++){

        for(int spaces = height-line; spaces>0; spaces--){

            printf(" ");
        }

        for(int hashes = 0; hashes<line+2; hashes++){
            printf("#");

        }

        printf("\n");

    }
}
