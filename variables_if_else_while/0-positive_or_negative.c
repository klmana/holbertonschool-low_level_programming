#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*header
*I declare the libraries that will be needed by the functions:
*Stdlib.h : for random : rand srand
*Time.h : for time funtion needed to generate a random number : time
*stdio.h :for input/output funtion : printf
*main - assign a random number to the variable n each time it is executed
*Return: always 0 when success
*/
int main(void)

/**
*the main funtion will be called without any parameter
*/
{
int n;

/**
*n is declared as an integer so a number between  −32,767 and +32,767
*/
srand(time(0));

/**
*time(0) gives the time in seconds so it is an unpredictable time
*srandgive the random a new number by making many operation
*/

n = rand() - RAND_MAX / 2;
/**
*n is defined as a random number
*/
if (n > 0)
printf("%d is positive\n", n);
/**
*if n is bigger than 0 then display (printf) the integer n is positive
* %d means it will display the integer that is in the argument after
*in this case the n that comes at the end of the sentence
*/
else if (n == 0)
printf("%d is zero\n", n);
/**
* if n is eqal to  0 then display (printf) the integer n is zero
* %d means it will display the integer that is in the argument after
*in this case the n that comes at the end of the sentence
*/
else if (n < 0)
printf("%d is negative\n", n);
/**
*if n is smaller than 0 then display (printf) the integer n is negative
* %d means it will display the integer that is in the argument after
*in this case the n that comes at the end of the sentence
*/
return (0);
}
