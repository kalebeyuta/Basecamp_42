#include <unistd.h>

int	ft_sqrt(int nb)
{
	int		counter;

	counter = 1;
	if (nb > 0)
	{
		while (counter * counter <= nb)
		{
			if (counter * counter == nb)
				return (counter);
			else if (counter >= 46341)
				return (0);
			++counter;
		}
	}
	return (0);
}
