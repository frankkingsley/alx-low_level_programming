#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - print password.
 *
 * Return: 0.
 */

int main(void)
	{
int num;
srand(time(0));
num = rand();
printf("%i\n", num);
return (0);
}
