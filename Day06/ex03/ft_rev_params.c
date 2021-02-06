/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 20:12:39 by aerragha          #+#    #+#             */
/*   Updated: 2018/08/01 20:18:36 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ca);

int		main(int argc, char **argv)
{
	int i;
	int j;

	j = 0;
	i = argc - 1;
	while (i > 0)
	{
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i--;
		j = 0;
	}
	return (0);
}
