#include <stdio.h>

/**
 * main - prints the number of arguements passed into it
 * @argc: Count arguements
 * @argv: Arguements
 * Return: on success 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
