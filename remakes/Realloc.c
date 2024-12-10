/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaefer <rafaefer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:16:14 by rafaefer          #+#    #+#             */
/*   Updated: 2024/12/10 11:38:22 by rafaefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remakes.h"

void	*realloc_r(void *ptr, size_t size)
{
	void	*new_ptr;

	new_ptr = realloc(ptr, size);
	if (!new_ptr && size != 0)
	{
		perror(RED"realloc FAIL"RST);
		exit(EXIT_FAILURE);
	}
	return (new_ptr);
}
