#include "solve.h"
#include "libutils.h"

int	check_left_1(int *clues, int **matrix)
{
	int	x;
	int *values;
	
	x = 0;
 	values = ft_malloc_vet(4);
	values[0] = matrix[0][0];
    values[1] = matrix[1][0];
    values[2] = matrix[2][0];
    values[3] = matrix[3][0];
	x += checkLine(clues[8], values);
	values[0] = matrix[0][1];
    values[1] = matrix[1][1];
    values[2] = matrix[2][1];
    values[3] = matrix[3][1];
	x += checkLine(clues[9],values);
	return (x);
}

int	check_left_2(int *clues, int **matrix)
{
	int	x;
	int *values;
	
	x = 0;
 	values = ft_malloc_vet(4);
	values[0] = matrix[0][2];
    values[1] = matrix[1][2];
    values[2] = matrix[2][2];
    values[3] = matrix[3][2];
	x += checkLine(clues[10], values);
	values[0] = matrix[0][3];
    values[1] = matrix[1][3];
    values[2] = matrix[2][3];
    values[3] = matrix[3][3];
	x += checkLine(clues[11], values);
	return (x);
}

int	check_right_1(int *clues, int **matrix)
{
	int	x;
	int *values;
	
	x = 0;
 	values = ft_malloc_vet(4);
    values[0] = matrix[3][0];
    values[1] = matrix[2][0];
    values[2] = matrix[1][0];
    values[3] = matrix[0][0];
	x += checkLine(clues[12], values);
	values[0] = matrix[3][1];
    values[1] = matrix[2][1];
    values[2] = matrix[1][1];
    values[3] = matrix[0][1];
	x += checkLine(clues[13], values);
	return (x);
}

int	check_right_2(int *clues, int **matrix)
{
	int *values;
	int	x;

	x = 0;
    values = ft_malloc_vet(4);

    values[0] = matrix[3][2];
    values[1] = matrix[2][2];
    values[2] = matrix[1][2];
    values[3] = matrix[0][2];
	x += checkLine(clues[14], values);
	values[0] = matrix[3][3];
    values[1] = matrix[2][3];
    values[2] = matrix[1][3];
    values[3] = matrix[0][3];
	x += checkLine(clues[15], values);
	return (x);
}
