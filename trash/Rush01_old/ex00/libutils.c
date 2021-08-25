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

int	ft_vetlen(int *vet)
{
	int	length;

	length = 0;
	while (vet[length] != '\0')
	{
		length++;
	}
	return (length);
}
