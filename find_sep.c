/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_sep.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylouvel <ylouvel@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:49:24 by ylouvel           #+#    #+#             */
/*   Updated: 2025/09/16 15:02:15 by ylouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    char *str = "Hello World? coco";
    int seen[256] = {0};
    char *sep = "? ";
    int i = 0;
    int j = 0;
    int wc = 0;

    while(sep[j])
    {
        i = 0;
        while(str[i])
        {
            if(sep[j] == str[i] && !seen[(int)str[i]])
            {
                seen[(int)str[i]] = 1;
                wc++;
            }
            i++;
        }
        j++;
    }
    printf("wc = %d\n", wc);
}