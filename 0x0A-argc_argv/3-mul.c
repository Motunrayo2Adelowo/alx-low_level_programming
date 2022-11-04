#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count arguements
 * @argv: arguements
 * Return: On success 0, else 1
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		a = atoi(argv[1]);
		a = atoi(argv[2]);
		printf("%d\n", a * b);

		return (0);
	}

	printf("Erro\n");

	return (1);
}
