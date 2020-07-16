/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chang-le <chang-le@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:24:01 by chang-le          #+#    #+#             */
/*   Updated: 2020/07/16 21:31:15 by chang-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
	char ff;
	char fb;
	char bf;
	char bb;
	
	ff = '0';
	fb = '0';
	bf = '0';
	bb = '1';
	
	while(ff <= '9')
	{
		while(fb <= '8')
		{
			while(bf <= '9')
			{
				while(bb <= '9')
				{
					write(1, &ff,1);
					write(1, &fb,1);
					write(1, " ", 1);
					write(1, &bf,1);
					write(1, &bb ,1);
					write(1, ", ", 2);
					++bb;
				}
				++bf;
			}
		}
	}
}
