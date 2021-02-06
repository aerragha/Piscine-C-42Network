/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 17:07:42 by aerragha          #+#    #+#             */
/*   Updated: 2018/07/26 18:15:43 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int tmp;

	if (hour >= 12)
		tmp = hour - 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0 || hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", tmp, tmp + 1);
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
}
