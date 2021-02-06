/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 20:41:29 by aerragha          #+#    #+#             */
/*   Updated: 2018/07/24 20:46:39 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int p;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	p = 1;
	while (i <= power)
	{
		p = p * nb;
		i++;
	}
	return (p);
}
