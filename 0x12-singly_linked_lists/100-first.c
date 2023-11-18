#include <stdio.h>

void b_main(void) __attribute__ ((constructor));

/**
 * b_main - it prints something before execution of main function 
 *
 * Return: void
 */
void b_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
