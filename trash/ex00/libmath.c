#include<unistd.h>

int	ft_fatorial(int n)
{
	int		result;

	result = n;
	while (n > 1)
	{
		result = result * (n - 1);
		n--;
	}
	return (result);
}

int	check_double(int tab[4][4], int pos, int num)
{
	int		i;

	i = -1;
	while (++i < pos / 4)
		if (tab[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++i < pos % 4)
		if (tab[pos / 4][i] == num)
			return (1);
	return (0);
}
