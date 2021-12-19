#include <stdio.h>

int main()
{
    int array[100];                   // array t store user input
    int lenght;                       // lenght of numbers to scan for user input
    int i;                            // int for iterations
    while (scanf("%d", &lenght) == 1) // scan the lenght of the line of input
    {
        for (i = 0; i < lenght; i++) // loop to scan for the numbers that will go into the array
        {
            scanf("%d", &array[i]); // store numbers into array
        }
        printf("%d elements:", lenght); // print statement
        for (i = 0; i < lenght; i++)    // loop to scan through the array
        {
            printf(" %d", array[i]); // print numbers inside the array
        }
        printf("\n"); // print a new line
    }
    return 0;
}