#include <unistd.h>
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int		cont;

	cont = 0;
	while (*str)
	{
		str++;
		cont++;
	}
	return (cont);
}
char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char *ft_strdup(char *src)
{
	char *dst = malloc(ft_strlen(src) + 1);
	if (dst == NULL)
	{
	return NULL;
	}
	ft_strcpy(dst,src);
	return (dst);
}
