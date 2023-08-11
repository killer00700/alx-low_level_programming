#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("size of a char : %u byte(s)\n", sizeof(char));
	printf("size of a int : %u byt(s)\n", sizeof(int));
	printf("size of a long int : %u byt(s)\n", sizeof(long int));
	printf("size of a long long int : %u byt(s)\n", sizeof(long long int));
	printf("size of a float : %u byt(s)\n", sizeof(float));
	return (0);
}
