/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <brlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:07:27 by brlee             #+#    #+#             */
/*   Updated: 2022/02/26 19:25:50 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i < nb && i < 46340)
	{
		i++;
	}
	if (i * i != nb)
	{
		return (0);
	}
	else
	{
		return (i);
	}
}
