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

int	ft_is_diff(char *str, char *to_find)
{
	unsigned int	j;
	int				diff;

	j = 0;
	diff = 0;
	while (to_find[j] != '\0' && diff != 1)
	{
		if (str[j] != to_find[j])
		{
			diff = 1;
		}
		j++;
	}
	return (diff);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	max_len;
	int				diff;
	int				found;

	i = 0;
	found = 0;
	max_len = ft_strlen(str) - ft_strlen(to_find);
	while (str[i] != '\0' && found != 1 && i <= max_len)
	{
		diff = ft_is_diff(&str[i], to_find);
		if (diff == 0)
		{
			found = 1;
		}
		else
		{
			i++;
		}
	}
	if (found == 1)
	{
		return (&str[i]);
	}
	return (to_find);
}
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "012340123456789";
	char to_find[] = "456";

	printf("-----\nstr = %s\nto_find = %s\n", str, to_find);
	printf("%s\n", ft_strstr(str, to_find));

	return (0);
}