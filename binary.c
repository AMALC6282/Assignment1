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