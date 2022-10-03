#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print number of arguments passed
 *
 * @argc: counts the arguments
 * @argv: arguments
 *
 * Return: 0(success exit)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
