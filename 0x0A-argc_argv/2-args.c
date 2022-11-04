#include <stdio.h>

/**
 * main- prints all arguement it recieves
 * @argc: count arguement
 * @argv: arguement
 * Return: on success 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}

	return (0);
}
