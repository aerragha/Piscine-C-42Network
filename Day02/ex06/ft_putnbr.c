/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 17:18:30 by aerragha          #+#    #+#             */
/*   Updated: 2018/07/22 17:52:11 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ca);

void	ft_putnbr(int nb)
{
	int n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = nb * -1;
	}
	else
		n = nb;
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}
