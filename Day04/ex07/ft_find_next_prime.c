/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 13:04:40 by aerragha          #+#    #+#             */
/*   Updated: 2018/07/25 13:38:26 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int cp;
	int i;

	cp = 0;
	i = 1;
	while (i < nb)
	{
		if (nb % i == 0)
			cp++;
		i++;
	}
	if (cp == 1)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (1)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
}
