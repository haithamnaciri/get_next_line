/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:23:22 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/11/14 11:50:13 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	if (!s)
		return (0);
	str = (char *) s;
	while (*str)
	{
		if ((char)c == *str)
			return (str);
		str++;
	}
	if (*str == (char)c)
		return (str);
	return (0);
}

char	*new_stock(int fd, char *stock)
{
	char	string[BUFFER_SIZE + 1];

	if (!stock)
		stock = malloc (sizeof(char) * 1);
	stock[ft_strlen(stock)] = '\0';
	while (!ft_strchr(stock, '\n'))
	{
		if (!read (fd, string, BUFFER_SIZE))
			return (0);
		stock = ft_strjoin(stock, string);
	}
	return (stock);
}

char	*get_line(char	*stock)
{
	char	*line;
	int		i;

	i = 0;
	if (stock == 0)
		return (0);
	while (stock[i] != '\0' && stock[i] != '\n')
		i++;
	if (stock[i] == '\0')
		line = malloc (sizeof(char) * (i + 1));
	else
		line = malloc (sizeof(char) * (i + 2));
	i = 0;
	while (stock[i] != '\0' && stock[i] != '\n')
	{
		line[i] = stock[i];
		i++;
	}
	if (stock[i] == '\n')
	{
		line[i] = stock[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*stock = 0;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	if (!(ft_strchr(stock, '\n')))
		stock = new_stock(fd, stock);
	line = get_line(stock);
	stock = ft_strchr(stock, '\n');
	if (stock)
		stock++;
	return (line);
}
