/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanis <yanis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:38:01 by ylouvel           #+#    #+#             */
/*   Updated: 2025/09/16 15:27:27 by yanis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	count_word(char *str, char *c)
{
	int i;
	int j;
	int wc;

	i = 0;
	j = 0;
	wc = 0;
	while (str[i])
	{
		j = 0;
		while (c[j])
		{
			if (str[i] == c[j])
				break ;
			j++;
		}
		if ((str[i] == c[j] && c[j] != str[i - 1]) || (c[j] == '\0' && i == 0))
			wc++;
		i++;
	}
	printf("wc = %d\n", wc);
	return (wc);
}

int if_sep(char *str, char *sep, int *i)
{
	int k;
	k = 0;
	while (sep[k])
	{
		if (str[*i] == sep[k])
		{
			(*i)++;
			return 1;
		}
		k++;
	}
	return 0;
}

char	**ft_split(char *str, char *charset)
{
	char **tab;
	int i;
	int j;
	int k;
	int wc;
	i = 0;
	j = 0;
	k = 0;
	wc = count_word(str, charset);
	tab = malloc(sizeof(char *) * (wc));
	if (!tab)
		return (NULL);
	while (k < wc)
	{
		while (str[i] && if_sep(str, charset, &i))
			i++;
		j = i;
		while (str[j] && !if_sep(str, charset, &j))
			j++;
		tab[k] = malloc(sizeof(char) * (j - i));
		if (!tab[k])
			return (NULL);
		int l = 0;
		while (i < j)
			tab[k][l++] = str[i++];
		tab[k][l] = '\0';
		k++;
	}
	tab[k] = NULL;

    return tab;
}

int main()
{
    char *str = "Hello World coco ";
	int i = 0;
    char *charset = " ";
	char **split;
    // printf("%d\n", count_word(str, charset));
	split = ft_split(str, charset);
	printf("str[0] = %s\nstr[1] = %s\nstr[2] = %s\nstr[3] = %s\n", split[0], split[1], split[2], split[3]);
}