#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter;
	unsigned int	tam;

	tam = 0;
	while (dest[tam] != '\0')
		tam++;
	counter = 0;
	while (counter < nb && src[counter] != '\0')
	{
		dest[tam] = src[counter];
		tam++;
		counter++;
	}
	dest[tam] = '\0';
	return (dest);
}
