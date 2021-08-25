#include "permutation.h"
#include "libmath.h"
#include "board.h"
#include "libprint.h"
#include "libutils.h"
#include "checkline.h"
#include<stdlib.h>

static int	g_solved = 0;
static int	*g_clues;
static int	**g_matrix_permutation;
static int	g_dados[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
	12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};

int	checkLine(int boxCount, int value1, int value2, int value3, int value4)
{
	int result;
	int highest;

	result = 1;
	highest = value1;
	if (value2 > highest) 
	{
		result++;
		highest = value2;
	}
	if (value3 > highest) 
	{
		result++;
		highest = value3;
	}
	if (value4 > highest)
		result++;
	if (result == boxCount)
		return (1);

	return (0);
}

void	check(int **matrix)
{
	int x;

	x = 0;
	x += check_up(g_clues, matrix);
	x += check_down(g_clues, matrix);
	x += check_left(g_clues, matrix);
	x += check_right(g_clues, matrix);

	if (x == 16 && g_solved == 0)
	{
		ft_print_matrix(matrix, 4, 4);
		g_solved++;
	}
}

void combinationUtil(int data[], int start, int end, int index)
{
	int	i;
	int	r;
	int	**matrix;

	i =start;
	matrix = ft_create_board(4, 4);

	r = 4;
	if (index == r)
	{
		matrix[0] = g_matrix_permutation[data[0]];
		matrix[1] = g_matrix_permutation[data[1]];
		matrix[2] = g_matrix_permutation[data[2]];
		matrix[3] = g_matrix_permutation[data[3]];

		check(matrix);
		free(matrix);
		return ;
	}
 
	while (i <= end && end-i+1 >= r-index)
	{
		data[index] = g_dados[i];
		combinationUtil(data, i+1, end, index+1);
		i++;
	}
}

void solve(int size, int *clues)
{
	int x;
	int *n;
	int cols;
	int rows;
	int data[4];

	n =  (int *)malloc(4 * sizeof(int));
	n[0] = 1;
	n[1] = 2;
	n[2] = 3;
	n[3] = 4;
	g_clues = (int *)malloc(16 * sizeof(int));
	g_clues = clues;
	x = 0;
	cols = size;
	rows = ft_fatorial(size);
	g_matrix_permutation = ft_create_board(rows, cols);
	permutation(n, g_matrix_permutation);


	x = sizeof(g_dados)/sizeof(g_dados[0]);
	combinationUtil(data, 0, x-1, 0);

	free(g_matrix_permutation);
}
