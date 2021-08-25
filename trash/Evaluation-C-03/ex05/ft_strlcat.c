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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;

	i = 0;
	dest_size = ft_strlen(dest);
	while (dest_size + i < size && src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	if (dest_size + i == size)
	{
		i--;
	}
	dest[dest_size + i] = '\0';
	if (size < dest_size)
	{
		return (size + ft_strlen(src));
	}
	return (dest_size + ft_strlen(src));
}
#include <string.h>
#include <stdio.h>


unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main()
{
	char			str0[50];
	char			str1[50];
	char			str2[] = "Concatenando 1";
	unsigned int	tamanho1;


	str0[0] = 'O';
	str0[1] = 'l';
	str0[2] = 'a';
	str0[3] = '\0';

	str1[0] = 'O';
	str1[1] = 'l';
	str1[2] = 'a';
	str1[3] = '\0';

	tamanho1 = ft_strlcat(str0, str2, 0);

	printf("String final: %s, Tamanho: %d", str0, tamanho1);
	
}