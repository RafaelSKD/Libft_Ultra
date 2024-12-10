/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remakes.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaefer <rafaefer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:39:29 by rafaefer          #+#    #+#             */
/*   Updated: 2024/12/10 11:43:08 by rafaefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REMAKES_H
# define REMAKES_H

# include "../include/libft.h"
# include <sys/wait.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

// ERRORS
# define EX_OSERR 71
# define EX_UNAVAILABLE 69

// COLORS
# define Y   "\033[1;33m"
# define G   "\033[1;32m"
# define C   "\033[1;36m"
# define RED "\033[1;31m"
# define RST "\033[0m"

// FUNCTIONS
# define DEL " \n\t\v\f\r"
# define CHILD 0

void	getcwd_r(char *buf, size_t size);
pid_t	fork_r(void);
void	*malloc_r(size_t size);
void	*realloc_r(void *ptr, size_t size);
pid_t	wait_r(int *status);

#endif
