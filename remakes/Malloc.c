/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaefer <rafaefer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:15:17 by rafaefer          #+#    #+#             */
/*   Updated: 2024/12/10 11:34:47 by rafaefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remakes.h"

void	*malloc_r(size_t size)
{
	void	*ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size);
	if (!ptr)
	{
		perror(RED"Malloc FAIL"RST);
		exit(EXIT_FAILURE);
	}
	return (ptr);
}
