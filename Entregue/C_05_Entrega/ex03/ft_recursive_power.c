#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	res *= nb;
	return (res * ft_recursive_power(nb, --power));
}
