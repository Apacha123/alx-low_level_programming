#include <stdlib.h>
#include <stdio.h>
/**
* main - prints all arguments it receives.
* @argc: offset count
* @argv: offset value
* Return: 0
*/
int main(int argc, char *argv[])
{
int n;

for (n = 0; n < argc; n++)
{
printf("%s\n", argv[n]);
}
return (0);
}
