/* 
 * File:   PythagoreanTriples.c
 * Name: Baoquan Dinh
 * Due Date: June 24, 2014
 * System Used: MAC OSX
 * Algorithm: First for loop is side 1, second for loop is side 2 and the 
 *            third for loop is the hypotenuse. Each look will check if side 1 squared
 *            plus side 2 square = hypotenuse squared.
 *
 * Created on June 23, 2014, 11:04 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <Math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    for (int side1 = 0; side1 < 500; side1++)
    {
        for (int side2 = 0; side2 < 500; side2++)
        {
            for (int hypotenuse = 0; hypotenuse < 500; hypotenuse++)
            {
                //a^2 + b ^2 = c^2
                if(pow(side1,2) + pow(side2,2) == pow(hypotenuse,2))
                {
                    printf("%.0f + %.0f = %.0f\n", pow(side1,2), pow(side2,2), pow(hypotenuse,2));
                }
                else
                {
                    
                }
            }
        }
    }

    return (EXIT_SUCCESS);
}

