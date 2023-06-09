#include <stdio.h>
void print(int nb)
{
	if (nb < 0)
	{
	return;
	}
	printf("%d", nb);
	nb --;
	print(nb);
}

int main(void)
{
	print(4);
	printf("\n");
	return (0);
}
