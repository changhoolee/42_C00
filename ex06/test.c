#include <stdio.h>

void	ft_print_comb2(void)
{
	int n1 = 0;
	int n2 = 0;

	while (n1 < 98)
	{
		n2++;
		if (n2 < 100)
		{
			n1++;
			n2 = n1 + 1;
		}
		printf("%d %d, ",n1 ,n2);
	}
}

int		main()
{
	ft_print_comb2();
}
