/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cheking_nmbr_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-balb <ael-balb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:05:06 by ael-balb          #+#    #+#             */
/*   Updated: 2023/05/21 18:11:15 by ael-balb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	error_msg(void)
{
	ft_putstr_fd("ERROR: Number is Invalid\n", 2);
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
