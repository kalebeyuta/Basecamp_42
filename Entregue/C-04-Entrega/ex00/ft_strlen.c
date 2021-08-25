int	ft_strlen(char *str)
{
	int		cont;

	cont = 0;
	while (*str)
	{
		str++;
		cont++;
	}
	return (cont);
}
