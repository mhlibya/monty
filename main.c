#include"monty.h"

/**
 * file_content - soijfg
 * @filename: sofgu
 * Return: sipjf
 */
char *content_of(char *filename)
{
size_t bits_read;
char *content;

FILE *file = fopen(filename, "r");
if (!file)
{
printf("Error: Can't open file %s\n", filename);
exit(EXIT_FAILURE);
}
bits_read = fread(content, 1, 999, file);
content[bits_read] = '\0';
fclose(file);
return (content);
}


/**
 * main - sourfh
 * @argc: lsifugj
 * @argv: sirjfg
 * @Return: sirjf
 */
int main(int argc, char **argv)
{
char *filename = argv[1], *content;

if (argc != 2)
{
printf("USAGE: monty file\n");
exit(EXIT_FAILURE);
}
content = content_of(filename);
printf("%s\n", content);
return (0);
}
