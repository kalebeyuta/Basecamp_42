#include<unistd.h>
#include"libprint.h"

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
int *ft_atoi(char *str)
{ 
	int		c;
	int		s;
	int		*arr;

	*arr = (*int)malloc(17 * sizeof(int));
	s = 1;
	c = 0;
	if (*str == '\0')
	{
		write(1,"Favor inserir numeros", 21);
		return(0);
	}
	while(str[c])
	{
		if(str[c] > '0' && str[c] < '5')
		{
			arr[s] = str[c] - '0';
			s++;
		}
	}
	ft_print_vet(arr, 17);
	return (arr);
}
