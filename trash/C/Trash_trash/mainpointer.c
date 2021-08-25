#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main (void)
{
	int a;
	a = 1;
	ft_ft(&a);
	ft_putchar((a / 10 + '0'));
	ft_putchar((a % 10 + '0'));
	return 0;
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}