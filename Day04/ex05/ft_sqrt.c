/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 22:08:31 by aerragha          #+#    #+#             */
/*   Updated: 2018/07/24 22:12:30 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int sq;

	if (nb < 0)
		return (0);
	sq = 1;
	while (sq * sq < nb)
		sq++;
	if (sq * sq == nb)
		return (sq);
	return (0);
}
