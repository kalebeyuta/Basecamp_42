#include<unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	tam;

	i = 0;
	tam = 0;
	while (src[tam] != '\0')
		tam++;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i - 1] = '\0';
	return (tam);
}
