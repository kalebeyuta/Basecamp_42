#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	step;

	step = 0;
	while ((step < n) && (src[step] != '\0'))
	{
		dest[step] = src[step];
		step++;
	}
	while (step < n)
	{
		dest[step] = '\0';
		step++;
	}
	return (dest);
}
