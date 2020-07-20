/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chang-le <chang-le@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 13:56:54 by chang-le          #+#    #+#             */
/*   Updated: 2020/07/20 19:02:24 by chang-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_result(int a, int b)
{
	char arr [3];

	arr [0] = '0' + ((a/10)%10);
	arr [1] = '0' + (a%10);
	arr [2] = '0' + ((b%10)%10);
	arr [3] = '0' + (b%10);

	write(1, &arr[0], 1);
	write(1, &arr[1], 1);
	write(1, ' ', 2); 
	write(1, &arr[2], 1);
	write(1, &arr[3], 1);
	if (arr[2] != '9' && arr[3] != '9') 
	{
		write(1, ', ', 1);
	}
}

int		ft_print_comb2()
{
	int	a = 0;
	int b = 1;

	while (a <= 98)
	{
		while ( b < 100)
		{
			b++;
			if (b <= 99)
			{
				a = a + 1;
				b++;
			}
			ft_print_result(a, b);
		}
		a++;
	}
}

int		main(void)
{
	int		ft_print_comb2();
}
