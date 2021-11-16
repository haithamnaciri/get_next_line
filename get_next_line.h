/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:25:36 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/11/16 12:41:39 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include<fcntl.h>

char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(const char *s);
char	*get_next_line(int fd);

#endif
