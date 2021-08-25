#include<unistd.h>
int	main(int argc, char *argv[])
{
	int	counter0;
	int	counter1;

	counter0 = 0;
	counter1 = 1 ;
	if (argc > 0)
	{
		while (counter1 < argc)
		{
			counter0 = 0;
			while (argv[counter1][counter0] != '\0')
			{	
				write (1, &argv[counter1][counter0], 1);
				counter0++;
			}
			write (1, "\n", 1);
			counter1++;
		}
	}
	return (0);
}
