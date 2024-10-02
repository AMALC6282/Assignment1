/*
program header
1.objective : write a C code to check number of 1's in the binary equivalent of a given number.
2.Revisions : Nil
3.Date & time of revesion : 02/10/24
4.Author Name : Amal c
*/
#include <stdio.h>
int main()
{
    int number, count = 0; //initialise
    printf("Enter a number: "); //input from user
    scanf("%d", &number);

while (number > 0) //counting the no of 1s in binary 
     {
        count += number % 2; // Add 1 to count if the last bit is 1
        number /= 2;         // Divide the number by 2 to shift right
    }

    
    printf("Number of 1's in the binary representation: %d\n", count); //printing the output
    return 0;
}
