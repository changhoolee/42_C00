/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chang-le <chang-le@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:26:06 by chang-le          #+#    #+#             */
/*   Updated: 2020/07/15 21:12:55 by chang-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursive(char c)
{
	if (c == 58)
	{
		return ;
	}
	write(1, &c, 1);
	recursive(c + 1);
}

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	recursive(c);
}
