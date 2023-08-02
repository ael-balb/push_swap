/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cheking_nmbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:05:06 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/27 18:11:19 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg(void)
{
	ft_putstr_fd("error: Number is Invalid\n", 2);
	exit (1);
}

void	checking_nmbr(char **str)
{
	int	i;
	int	j;
	int	checking;

	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i][j] == '-' || str[i][j] == '+')
		{
			checking = ft_isdigit(str[i][++j]);
			if (!checking)
				error_msg();
		}
		while (str[i][j])
		{
			checking = ft_isdigit(str[i][j]);
			if (!checking)
				error_msg();
			j++;
		}
		i++;
	}
}
