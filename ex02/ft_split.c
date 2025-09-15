/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylouvel <ylouvel@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:38:01 by ylouvel           #+#    #+#             */
/*   Updated: 2025/09/15 23:03:13 by ylouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	count_word(char *str, char c)
{
	int	i;
	int	j;
	int	wc;

	i = 0;
	j = 0;
	wc = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
        while (str[i] != c)
		{
			if (str[i + 1] == c)
				wc++;
			i++;
		}
	}
	return (wc);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
    return tab;
}

int main()
{
    char *str = "| Hello | World | coco |";
    char charset = '|';
    printf("%d\n", count_word(str, charset));
}