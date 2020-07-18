/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chang-le <chang-le@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:13:53 by chang-le          #+#    #+#             */
/*   Updated: 2020/07/18 14:57:53 by chang-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char hd_start, char td_start, char zd_start)
{
	while (hd_start <= '7')
	{
		td_start = hd_start + 1;
		while (td_start <= '8')
		{
			zd_start = td_start + 1;
			while (zd_start <= '9')
			{
				write(1, &hd_start, 1);
				write(1, &td_start, 1);
				write(1, &zd_start, 1);
				if (hd_start == '7' && td_start == '8' && zd_start == '9')
					return ;
				write(1, ", ", 2);
				++zd_start;
			}
			++td_start;
		}
		++hd_start;
	}
}

void	ft_print_comb(void)
{
	char	hd_start;
	char	td_start;
	char	zd_start;

	hd_start = '0';
	td_start = '1';
	zd_start = '2';
	ft_put_char(hd_start, td_start, zd_start);
}
