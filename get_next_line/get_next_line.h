/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaefer <rafaefer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:17:12 by rafaefer          #+#    #+#             */
/*   Updated: 2024/07/17 10:17:12 by rafaefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>
# include "../include/libft.h"

char	*get_next_line(int fd);
char	*gnl_read_file(int fd, char *txt);
char	*gnl_get_line(char *txt);
char	*gnl_create_txt(char *txt);

// Utility functions
size_t	gnl_strlen(const char *s);
char	*gnl_strrchr(const char *s, int c);
char	*gnl_strjoin(const char *s1, const char *s2);
char	*gnl_strncpy(char *dest, const char *src, unsigned int n);
char	*gnl_strdup(const char *s1);

#endif
