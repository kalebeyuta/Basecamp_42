#include "permutation.h"
#include "libmath.h"
#include "board.h"
#include "libprint.h"
void solve(int size, int *clues)
{
	
	int n[] = {1,2,3,4};
	int cols;
	int rows;
	int **board;
	
	cols = size;
	rows = ft_fatorial(size);
	board = ft_create_board(rows, cols);
	clues[0] = 1; 
	permutation(n, board);

	ft_print_matrix(board, rows, cols);

}