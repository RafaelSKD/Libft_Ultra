/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Getcwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaefer <rafaefer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:14:21 by rafaefer          #+#    #+#             */
/*   Updated: 2024/12/10 11:31:53 by rafaefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remakes.h"

void	getcwd_r(char *buf, size_t size)
{
	if (NULL == getcwd(buf, size))
		perror(RED"getcwd FAIL"RST);
}
