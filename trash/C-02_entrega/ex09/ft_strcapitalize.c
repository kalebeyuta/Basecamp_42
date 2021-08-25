#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z' ) && (str[i] < 'a' || str[i] > 'z'))
		{
			i++;
			if ((str[i] < 'A'))
				i++;
			if (str[i] == ' ')
				i ++;
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
		}
		else
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
