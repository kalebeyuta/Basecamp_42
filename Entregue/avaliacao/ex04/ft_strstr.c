#include <string.h>
#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	char	*find;
	int		i;

	find = NULL;
	i = 0;
	while (*str)
	{
		if (!to_find[i])
			break ;
		if (*str == to_find[i++])
		{
			if (!find)
				find = str;
		}
		else
		{
			find = NULL;
			i = 0;
		}
		str++;
	}
	return (find);
}
int		main(void)
{
	char tab[] = {"This is a simple string"};
    char tab2[] = {"simple"};
	printf("\n Retorno é %s \n",ft_strstr(tab, tab2));
	char tab3[] = {"This is a simple string"};
    char tab4[] = {"simple"};
	printf("\n Retorno é %s \n",strstr(tab3, tab4));
	return 0;
}