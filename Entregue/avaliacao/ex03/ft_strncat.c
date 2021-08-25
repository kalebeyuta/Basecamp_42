#include <string.h>
int	ft_strlen(char *s)
{
	char	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	dest_len;

	dest_len = ft_strlen(dest);
	if (!nb)
		return (dest);
	while (*src && --nb)
	{
		dest[dest_len++] = *src++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
#include <stdio.h>
int		main(void)
{
	char tab[] = {"A"};
    char tab2[] = {"Aaa"};
	printf("\n Retorno é %s \n",ft_strncat(tab, tab2,3));
	char tab3[] = {"A"};
    char tab4[] = {"Aaa"};
	printf("\n Retorno é %s \n",strncat(tab3, tab4,3));
	return 0;
}