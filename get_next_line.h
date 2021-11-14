/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:25:36 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/11/14 12:35:27 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include<fcntl.h>

char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(char *str);
char	*get_next_line(int fd);

#endif
