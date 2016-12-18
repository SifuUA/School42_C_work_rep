/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepnovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 15:17:52 by arepnovs          #+#    #+#             */
/*   Updated: 2016/12/18 12:08:22 by oslutsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arr_putstr(char **str)
{
	if (str)
	{
		while (*str != '\0')
		{
			ft_putendl(*str);
			str++;
		}
	}
}
