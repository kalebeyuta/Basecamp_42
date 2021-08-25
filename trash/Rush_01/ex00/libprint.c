#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

void	ft_print_vet(int *num, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putnbr(num[i]);
		i++;
		if(i != n)
			ft_putchar(' ');
	}
	ft_putchar('\n');
}

void	ft_print_matrix(int **matrix, int l, int c)
{
	int	i;

	i = 0;
	while (i < l)
	{
		ft_print_vet(matrix[i], c);
		i++;
	}
}
