#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	step;

	step = 0;
	while (step < n && src[step] != '\0')
	{
		dest[step] = src[step];
		step++;
	}
	while (step < n)
	{
		dest[step] = '\0';
	}
	return (dest);
}
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "Source string.";
	char dest[] = "Destination string.";
	unsigned int n;

	n = 2;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);

    ft_strncpy(dest, src, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}