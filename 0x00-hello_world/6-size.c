#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

print("size of a chat: %d byte(s)\n", (unsigned long)sizeof(d));
print("size of an int: %d byte(s)\n", (unsigned long)sizeof(a));
print("size of a long int: %d byte(s)\n", (unsigned long)sizeof(b));
print("size of a long long int: %d byte(s)\n", (unsigned long)sizeof(d));
print("size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
