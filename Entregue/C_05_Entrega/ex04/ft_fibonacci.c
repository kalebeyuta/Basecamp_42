#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	n1;

	if (index < 0)
		return (-1);
	else if (index == 1)
		return (1);
	else if (index > 1)
		return (n1 = ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (0);
}
