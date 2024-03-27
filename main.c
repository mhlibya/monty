#include "monty.h"


/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
char *filename, *content;

if (argc != 2)
{
printf("USAGE: monty file\n");
exit (EXIT_FAILURE);
}
filename = argv[1];
content = content_of(filename);
if (!content)
       	exit (EXIT_FAILURE);
printf("%s\n", content);
free(content); /* Free allocated memory */
return (EXIT_SUCCESS);
}
