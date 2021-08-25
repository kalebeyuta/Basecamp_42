#include <unistd.h>
#include <stdlib.h>
int *ft_range(int min, int max)
{
	int counter;
	int *matrix;

	if (min >= max)
		return (0);
	matrix = (int *)malloc((max - min) * sizeof(int));
	if (matrix == NULL)
		return(0);
	counter = 0;
	while (min < max )
	{
		matrix[counter] = min;
		min ++;
		counter++;
	}
	return matrix;
}
