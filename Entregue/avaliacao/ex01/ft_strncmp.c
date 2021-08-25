
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (!n)
		return (0);
	while (!(*s1 - *s2) && --n)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <stdio.h>
int		main(void)
{
	char tab[] = {"Aaa"};
    char tab2[] = {"Aaa"};
	printf("\n Retorno é %d \n",ft_strncmp(tab, tab2,2));
	return 0;
}