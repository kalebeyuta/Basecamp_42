void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main (void)
{
	int number1;
	int number2;
	number1 = 8;
	number2 = 3;
	ft_div_mod(number1,number2, &number1 , &number2);

	ft_putchar(number1 + '0');
	ft_putchar(number2 + '0');

	return 0;
}
