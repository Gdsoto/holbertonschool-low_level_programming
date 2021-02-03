#include <stdio.h>
/**
 * main - Entry point, prints all sizeof
 *
 * Return: Always 0
 */

int main(void)
{
char ch;
int in;
long lg;
double db;
float ft;

printf("Size of a char: %d byte(s)\n", sizeof(ch));
printf("Size of an int: %d byte(s)\n", sizeof(in));
printf("Size of a long int: %d byte(s)\n", sizeof(lg));
printf("Size of a long long int: %d byte(s)\n", sizeof(db));
printf("Size of a float: %d byte(s)\n", sizeof(ft));
return (0);
}
