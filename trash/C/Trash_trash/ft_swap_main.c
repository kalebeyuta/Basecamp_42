
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_swap(int *a, int *b)
{
	int swapper;
	swapper = *a;
	*a = *b;
	*b = swapper;
}
