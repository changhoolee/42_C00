/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_nagative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chang-le <chang-le@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:30:29 by chang-le          #+#    #+#             */
/*   Updated: 2020/07/16 13:07:33 by chang-le         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;
	char	minus;
	char	plus;

	c = n;
	minus = 77;
	plus = 80;
	if (c >= 0)
		write(1, &plus, 1);
	else
		write(1, &minus, 1);
}
