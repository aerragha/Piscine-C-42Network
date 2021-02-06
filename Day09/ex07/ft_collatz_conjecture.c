/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 03:32:18 by aerragha          #+#    #+#             */
/*   Updated: 2018/07/27 03:35:35 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (base % 2 == 0)
		base /= 2;
	else
		base = base * 3 + 1;
	return (ft_collatz_conjecture(base) + 1);
}
