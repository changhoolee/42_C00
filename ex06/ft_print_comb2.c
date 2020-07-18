/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chang-le <chang-le@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:17:41 by chang-le          #+#    #+#             */
/*   Updated: 2020/07/18 18:44:43 by chang-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_back(char ff, char fb, char bf, char bb)
{
	while (bf < 58)
	{
		if (bf != '0')
			bb = '0';
		while (bb < 58)
		{
			write(1, &ff, 1);
			write(1, &fb, 1);
			write(1, " ", 1);
			write(1, &bf, 1);
			write(1, &bb, 1);
			write(1, "\n", 1);
			++bb;
		}
        ++bf;
	}
}
void ft_print_comb2(void)
{
	char ff = '0';
	char fb = '0';
	char bf = '0';
	char bb = '1';

	while (ff < 58)
	{
		//fb = '0';
		while (fb < 58) 
		{
			ft_back(ff, fb, bf, bb);
			++fb;
			++bb;
		}
		++ff;
	}
}
