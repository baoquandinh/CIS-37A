/*
 * Name: Baoquan Dinh
 * Due Date:
 * System Used: MAC OSX
 * Algorithm: Create a loop for line that will create 10 lines. On each line
 * there is another loop that will figure out the squre and cube of a number
 *
 * Created on June 17, 2014, 10:15 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    puts("number square cube");
    
    //First loop is the line, second loop will multiply by power of 1, 2, 3
    for (int i = 0; i <= 10; i++)
    {
        int j = 1;
        
        while (j < 3)
        {
            printf("%.f\t",pow(i, j));
            j++;
        }
        
        printf("%.f\n",pow(i, j));
        
    }
    return (EXIT_SUCCESS);
}

