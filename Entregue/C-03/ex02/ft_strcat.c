#include <unistd.h>
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	tam;

	i = 0;
	tam = 0;
	while (dest[tam])
		tam++;
	while (src[i])
	{
		dest[i + tam] = src[i];
		i++;
	}
	dest[i + tam] = '\0';
	return (dest);
}
