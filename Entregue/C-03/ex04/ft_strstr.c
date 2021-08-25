#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	if (to_find[counter] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + counter] == to_find[counter])
		{
			if (to_find[counter + 1] == '\0')
				return (&str[i]);
			counter++;
		}
		counter = 0;
		i++;
	}
	return (0);
}
