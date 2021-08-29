#include <stdio.h>
#include <unistd.h>

/**
 * This program returns the output 1 as correctness
 * The writr function is used in place of printf and puts
 * However, the unistd.h was called for this to be use
 * Our program print out the output
 * End of program
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return(1);
}
