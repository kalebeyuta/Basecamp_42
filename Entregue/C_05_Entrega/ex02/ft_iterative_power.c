#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int		result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = nb;
	while (power > 1)
	{
		result = nb * result;
		power--;
	}
	return (result);
}
