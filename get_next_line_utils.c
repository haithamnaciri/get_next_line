/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:43:33 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/11/15 14:43:36 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(const char *s)
{
    if (!s)
        return (0);
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

static char     *ft_copy(char *s1, char const *s2)
{
        int             i;
        int             j;
        char    *str;

        i = 0;
        j = 0;
        str = malloc (sizeof(char) * (ft_strlen((char *)s1)
                                + ft_strlen((char *)s2) + 1));
        if (!str)
                return (0);
        while (s1[i] != '\0')
        {
                str[j] = s1[i];
                i++;
                j++;
        }
        i = 0;
        while (s2[i] != '\0')
        {
                str[j] = s2[i];
                i++;
                j++;
        }
        str[j] = '\0';
        free (s1);
        return (str);
}

char    *ft_strjoin(char *s1, char *s2)
{
        if (!s1)
        {
            s1 = malloc (sizeof(char) * 1);
            s1[0] = '\0';
        }
        if (!s1 || !s2)
                return (0);
        return (ft_copy(s1, s2));
}