/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 18:04:42 by aerragha          #+#    #+#             */
/*   Updated: 2018/08/01 18:31:46 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ca);

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argv[0][i] != '\0' && argc)
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
