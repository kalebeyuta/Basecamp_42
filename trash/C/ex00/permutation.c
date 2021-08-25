void	ft_swap(int *a, int *b);
void	print(int *num, int n);
#include "library.h"
int	permutation(int values, int inf, int sup)
{	
	int	i;

	if(inf == sup)
	{
		print(values, 4);
	}
	else
	{
		i = inf;
		while (i <= sup-1)
		{
			ft_swap(&values[inf], &values[i]);
			permutation(values, inf + 1, sup);
			ft_swap(&values[inf], &values[i]);
			i++;
		}
	}
	return values;
}
