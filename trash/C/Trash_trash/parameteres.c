void	main(int x,int y);

int	main(int argc, char *argv[])
{
	int arg1;
	int arg2;

	arg1 = *argv[1] - '0';
	arg2 = *argv[2] - '0';
	rush(arg1, arg2);
 
}