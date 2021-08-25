#include<stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	ft_str_is_numeric(char *str)
{
	char			c;
	unsigned int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		c = str[pos];
		if (c < 48 || c > 57)
			return (0);
		pos++;
	}
	return (1);
}

int *custom_atoi(char *str)
{
    int c;
    int s;
    int *arr = (int *)malloc(16 * sizeof(int));

    s = 0;
    c = 0;
    while(str[c])
    {
        if (str[c] > '0' && str[c] < '5')
        {
            arr[s] = str[c] - '0';
            s++;
        }
        c++;
    }
    return (arr);
}

int	**ft_malloc(int rows, int cols)
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

int	*ft_malloc_vet(int cols)
{
	int	row;
	int	*vet;

	row = 0;
	vet = (int *)malloc(cols * sizeof(int *));
	return (vet);
}
