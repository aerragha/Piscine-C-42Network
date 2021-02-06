/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 10:26:15 by aerragha          #+#    #+#             */
/*   Updated: 2018/08/03 10:48:32 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *t;
	int i;

	if (min >= max)
		return (0);
	if (!(t = malloc(sizeof(int) * (max - min))))
		return (0);
	i = 0;
	while (min <= max - 1)
	{
		t[i] = min++;
		i++;
	}
	*range = t;
	return (i);
}
