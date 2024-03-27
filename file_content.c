#include"monty.h"

/**
 * file_content - soijfg
 * @filename: sofgu
 * Return: sipjf
 */
char *content_f(char *filename)
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
