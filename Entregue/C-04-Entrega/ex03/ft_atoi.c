int	ft_check(char *str)
{
	int		sum;
	int		counter1;

	sum = 1;
	counter1 = 0;
	while ((str[counter1] != '-' && str[counter1] != '+')
		&& !(str[counter1] >= '0' && str[counter1] <= '9'))
	{
		if ((str[counter1] == '\t' || (str[counter1] >= '\v' && str[counter1]
					<= '\r' ) || (str[counter1] == ' ')
				    || str[counter1] == '\n'))
			 counter1++;
		else
			return (0);
		if (str[counter1] == '-' )
		{
			sum = sum * -1;
			counter1++;
		}
		else
			counter1 ++;
	}
	return (sum);
}

int	ft_atoi(char *str)
{
	int		res;
	int		sum1;
	int		counter;

	res = 0;
	sum1 = 0;
	counter = 0;
	sum1 = ft_check(str);
	while (str[counter])
	{
		 if ((str[counter] >= '0') && (str[counter] <= '9' ))
		{
			res = (str[counter] - '0') + (res * 10);
			counter++;
			if (str[counter + 1] < '0' || str[counter + 1] > '9')
			{
				res = (str[counter] - '0') + (res * 10);
				return (res * sum1);
			}
		}
		else
			counter++;
	}
	return (res * sum1);
}
