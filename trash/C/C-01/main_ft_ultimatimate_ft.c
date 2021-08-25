int main (void)
{
	int a;
	int* pbr;
	int** pnbr;
	int*** ppnbr;
	int**** pppnbr;
	int***** ppppnbr;
	int****** pppppnbr;
	int******* ppppppnbr;
	int******** pppppppnbr;
	pbr = &a;
	pnbr = &pbr;
	ppnbr = &pnbr;
	pppnbr = &ppnbr;
	ppppnbr = &pppnbr;
	pppppnbr = &ppppnbr;
	ppppppnbr = &pppppnbr;
	pppppppnbr = &ppppppnbr;
	ft_ft(&pppppppnbr);
	ft_putchar((a / 10 + '0'));
	ft_putchar((a % 10 + '0'));
	return 0;
}