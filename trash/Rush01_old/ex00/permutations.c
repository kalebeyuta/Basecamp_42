#include "libutils.h"

void	permutation(int *arr, int **dest)
{
	int i;
	int count;
	int x;
	int sup;

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
	
void	sum1(int *c)
{    
	int s;
	int aux;

	s = 0;
	while(c[s])
	{
		if(c[s] != 4)
		{
			aux = c[s];
			c[s] = aux + 1;
		}
		else
			c[s] = 1;
		s++;
	}
}

void	store(int *src,int **dest, int pos)
{
	int j;

	j = 0;
	while(dest[pos][j] == 0)
	{
		dest[pos][j] = src[j];
		j++;
	}
}
