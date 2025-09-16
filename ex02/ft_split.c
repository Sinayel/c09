/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylouvel <ylouvel@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:38:01 by ylouvel           #+#    #+#             */
/*   Updated: 2025/09/16 14:49:04 by ylouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	count_word(char *str, char *c)
{
	int	i;
	int	j;
	int	wc;

	i = -1;
	j = 0;
	wc = 0;
	while (str[++i])
	{
		j = 0;
		while(str[i] == c[j])
		{
			if(c[j+1] == '\0')
			{
				j = 0;
				wc++;
			}
			i++;
			j++;
		}
	}
	return (wc);
}

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return i;
}

int if_sep(char *str, char *sep, int *i, int *j)
{
	if(str[])
	return 0;
}


char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int wc;
	wc = count_word(str, charset);
	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * wc + 1);
	while(i < wc)
	{
		while(str[i] != charset[j])
		{
		}
		i++;
	}
    return tab;
}

int main()
{
    char *str = "Hello | World | coco |";
	int i = 0;
    char *charset = " |";
    // printf("%d\n", count_word(str, charset));
	ft_split(str, charset);
}