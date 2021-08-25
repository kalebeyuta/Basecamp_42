unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_size;

	i = 0;
	dest_size = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
#include <stdio.h>
#include <string.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char dest[20] = "123";
	char src[] = "4567890";
	unsigned int nb = 3;


	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
	strncat(dest, src, nb);
	printf("result = %s\n-----\n", dest);
	return (0);
}