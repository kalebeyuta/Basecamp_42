#include<unistd.h>
#include<stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
	}
	ft_putnbr(nb % 10);
}

void print(int *num, int n)
{
    int i;
	i = 0;
    while(i < n)
	{
        ft_putnbr(num[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void print_matrix(int **matrix, int l, int c)
{
    int i;

	i = 0;
    while(i < l)
	{
		print(matrix[i], c);
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void 	randon(int **matrix, int n)
{
    int i;
	int k;
	int x;
	int y;
	int values[n];

	i = 1;
	while (i <= n)
	{
		values[i-1] = i;
		i++;
	}

	k = 0;
	x = 0;
	while (k < n) 
	{
		i = 0;
		while (i < n-1)
		{
			ft_swap(&values[i], &values[i+1]);
			y = 0;
			while (y <= sup)
			{
				matrix[x][y] = values[y];
				y++;
			}
			i++;
			x++;
		}
		k++;
	}
}

// int main(void)
// {
// 	int l;
// 	int c;
// 	l = ;
// 	c = 3;

// 	int **mat[] 

	// int **mat = (int **)malloc(l * sizeof(int*));
	// for(int i = 0; i < l; i++)
	// 	mat[i] = (int *)malloc(c * sizeof(int));


// 	randon(mat, c);
// 	print_matrix(mat, l, c);

	
// }

