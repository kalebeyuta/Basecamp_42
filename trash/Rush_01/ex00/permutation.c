#include "libutils.h"
#include "libprint.h"

void	sum1(int *vet)
{
	int		s;
	int		aux;

	s = 0;
	while (s < 4)
	{
		if (vet[s] != 4)
		{
			aux = vet[s];
			vet[s] = aux + 1;
		}
		else
			vet[s] = 1;
		s++;
	}
}

void	store(int *src, int **dest, int pos)
{
	int		j;

	j = 0;
	while (dest[pos][j] == 0)
	{
		dest[pos][j] = src[j];
		j++;
	}
}

void	permutation(int *arr, int **dest)
{
	int		i;
	int		x;
	int		sup;
	int		count;

	x = 0;
	i = 2;
	sup = 0;
	while (sup < 4)
	{
		count = 0;
		while (count < 6)
		{
			store(arr, dest, x);
			x++;
			ft_swap(&arr[1], &arr[i]);
			i++;
			if (i > 3)
				i = 2;
			count++;
		}
		sup++;
		sum1(arr);
	}
}
