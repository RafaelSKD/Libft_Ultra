/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wait.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaefer <rafaefer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:17:32 by rafaefer          #+#    #+#             */
/*   Updated: 2024/12/10 11:38:14 by rafaefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remakes.h"

pid_t	wait_r(int	*status)
{
	pid_t	result;

	if (!status)
	{
		fprintf(stderr, RED"WAIT: status arg required\n"RST);
		return (-1);
	}
	result = wait(status);
	if (result == -1)
		perror(RED"Wait FAIL"RST);
	if (WIFEXITED(*status))
		*status = WEXITSTATUS(*status);
	return (result);
}
