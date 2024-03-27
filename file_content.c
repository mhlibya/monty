#include "monty.h"

/**
 * file_content - soijfg
 * @filename: sofgu
 * Return: sipjf
 */
char *content_of(char *filename)
{
size_t bits_read;
char *content = malloc(1000); /* Allocate memory for content */
FILE *file;

if (!content)
{
printf("Error: Memory allocation failed.\n");
return (NULL);
}

file = fopen(filename, "r");
if (!file)
{
printf("Error: Can't open file %s\n", filename);
free(content); /* Free allocated memory */
return (NULL);
}

bits_read = fread(content, 1, 999, file); /* Read file content */
if (bits_read == 0)
{
printf("Error: Failed to read file %s\n", filename);
free(content); /* Free allocated memory */
return (NULL);
}

content[bits_read] = '\0'; /* Null-terminate the string */
fclose(file);
return (content);
}
