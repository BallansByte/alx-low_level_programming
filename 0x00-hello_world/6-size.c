#include <stdio.h>
/**
 *main - this is the main function of theh software
 *Return : value is always zero.
  *Return:0
**/
int main(void)
{
	char x;
	int y;
	long int p;
	long long int q;
	float r;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(p));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(q));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(r));
	return (0);
}
