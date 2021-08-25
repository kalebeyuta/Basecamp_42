#include<stdlib.h>

int	**ft_create_board(int rows, int cols)
{
	int	row;
	int	**board;

	row = 0;
	board = (int **)malloc(rows * sizeof(int *));
	while (row < rows)
	{
		board[row] = (int *)malloc(cols * sizeof(int));
		row++;
	}
	return (board);
}
