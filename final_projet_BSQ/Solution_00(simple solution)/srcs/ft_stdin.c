/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 14:59:15 by evgenkarlson      #+#    #+#             */
/*   Updated: 2021/04/09 15:01:35 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/bsq.h"

void	ft_stdin(void)
{
	char	buffer;
	int		r;

	while ((r = read(0, &buffer, 1)))
	{
		if (r == -1)
		{
			ft_putstr("Input read error: \n");
			break;
		}
		else
			write(1, &buffer, 1);
	}
}