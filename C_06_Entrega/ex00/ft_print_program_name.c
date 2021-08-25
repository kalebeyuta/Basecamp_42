#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	argc = 0;
	ft_putstr(argv[argc]);
	write(1, "\n", 1);
}
