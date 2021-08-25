#include<unistd.h>

int	ft_is_prime(int nb)
{
	int	counter;
	int	number;

	counter = 2;
	number = nb / 2;
	if (nb < 2)
		return (0);
	while (counter <= number)
	{
		if (nb % counter == 0)
			return (0);
		counter++;
	}
	return (1);
}
