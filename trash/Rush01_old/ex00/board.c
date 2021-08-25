#include<stdlib.h>

int	**ft_create_board(int rows, int cols)
{
	int	row;
	int **board = (int **)malloc(rows * sizeof(int *));

	row = 0;
	while (row < rows)
	{
		board[row] = (int *)malloc(cols * sizeof(int));
		row++;
	}
	return (board);
}
