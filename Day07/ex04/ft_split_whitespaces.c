/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerragha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 17:55:23 by aerragha          #+#    #+#             */
/*   Updated: 2018/08/07 14:42:01 by aerragha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_word(char c, char cb)
{
	return (((c >= '0' && c <= '9') ||
				(c >= 'A' && c <= 'Z') ||
				(c >= 'a' && c <= 'z'))
			&& (cb == ' ' || cb == '\n' || cb == '\t'));
}

int		get_words_count(char *str)
{
	int	words_c;
	int	i;

	i = 0;
	words_c = 0;
	while (str[i] != '\0')
	{
		if (ft_is_word(str[i], str[i - 1]) ||
				(str[i] != ' ' && str[i] != '\n' &&
					str[i] != '\t' && i == 0))
			words_c++;
		i++;
	}
	return (words_c);
}

int		ft_is_string(int i, char *str)
{
	return (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\n' &&
			str[i - 1] != '\t');
}

int		*get_words_size(char *str)
{
	int	index;
	int	i;
	int	words_c;
	int	*words_size;

	i = 0;
	words_c = get_words_count(str);
	words_size = malloc(words_c * sizeof(int));
	while (i <= words_c)
	{
		words_size[i] = 0;
		i++;
	}
	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			words_size[index]++;
		else if (ft_is_string(i, str))
			index++;
		i++;
	}
	return (words_size);
}

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	int		i;
	int		j;
	int		index;
	int		*words_size;

	words = malloc((get_words_count(str) + 1) * sizeof(char*));
	words_size = get_words_size(str);
	index = 0;
	j = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			if (i == 0 || ft_is_word(str[i], str[i - 1]))
				words[index] = malloc(words_size[index] * sizeof(char));
			words[index][j] = str[i];
			words[index][++j] = '\0';
		}
		else if (ft_is_string(i, str) && ++index)
			j = 0;
	}
	words[get_words_count(str)] = 0;
	return (words);
}
