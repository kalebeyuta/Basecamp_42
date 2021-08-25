int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (i == n)
	{
		i = n - 1;
	}
	return ((int)(unsigned char)s1 - (unsigned char)s2);
}
#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main()
{
	char s1[] = "Nada a ver";
	char s2[] = "Teste de Comparacao";
	char s3[] = "Teste";

	printf("s12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", ft_strncmp(s1, s2, 5), ft_strncmp(s2, s1, 5), ft_strncmp(s1, s3, 5), ft_strncmp(s3, s1, 5), ft_strncmp(s2, s3, 5), ft_strncmp(s3, s2, 5));
	printf("\n\ns12: %d, s21: %d, s13: %d, s31: %d, s23: %d, s32: %d", strncmp(s1, s2, 5), strncmp(s2, s1, 5), strncmp(s1, s3, 5), strncmp(s3, s1, 5), strncmp(s2, s3, 5), strncmp(s3, s2, 5));
}