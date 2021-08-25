#include "solve.h"
#include "libutils.h"

int	check_up_1(int *clues, int **matrix)
{
	int	x;
	int	*values;

	values = ft_malloc_vet(4);
	values[0] = matrix[0][0];
	values[1] = matrix[0][1];
	values[2] = matrix[0][2];
	values[3] = matrix[0][3];
	x = 0;
	x += checkLine(clues[0], values);
	values[0] = matrix[1][0];
	values[1] = matrix[1][1];
	values[2] = matrix[1][2];
	values[3] = matrix[1][3];
	x += checkLine(clues[1], values);
	return (x);
}

int	check_up_2(int *clues, int **matrix)
{
	int	x;
	int	*values;

	values = ft_malloc_vet(4);
	values[0] = matrix[2][0];
	values[1] = matrix[2][1];
	values[2] = matrix[2][2];
	values[3] = matrix[2][3];
	x = 0;
	x += checkLine(clues[2], values);
	values[0] = matrix[3][0];
	values[1] = matrix[3][1];
	values[2] = matrix[3][2];
	values[3] = matrix[3][3];
	x += checkLine(clues[3], values);
	return (x);
}

int	check_down_1(int *clues, int **matrix)
{
	int	x;
	int	*values;

	values = ft_malloc_vet(4);
	values[0] = matrix[0][3];
	values[1] = matrix[0][2];
	values[2] = matrix[0][1];
	values[3] = matrix[0][0];
	x = 0;
	x += checkLine(clues[4], values);
	values[0] = matrix[1][3];
	values[1] = matrix[1][2];
	values[2] = matrix[1][1];
	values[3] = matrix[1][0];
	x += checkLine(clues[5], values);
	return (x);
}

int	check_down_2(int *clues, int **matrix)
{
	int	x;
	int	*values;

	values = ft_malloc_vet(4);
	values[0] = matrix[2][3];
	values[1] = matrix[2][2];
	values[2] = matrix[2][1];
	values[3] = matrix[2][0];
	x = 0;
	x += checkLine(clues[6], values);
	values[0] = matrix[3][3];
	values[1] = matrix[3][2];
	values[2] = matrix[3][1];
	values[3] = matrix[3][0];
	x += checkLine(clues[7], values);
	return (x);
}
