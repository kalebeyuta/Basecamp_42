#include<unistd.h>
int main(void)
{
	void ft_print_alphabet(void);
	ft_print_alphabet();
	return 0;
}
void	ft_print_alphabet(void)
{
	char	letras;

	letras = 'a';
	while (letras <= 'z')
	{
		write( 1, &letras, 1);
		letras++;
	}
}
