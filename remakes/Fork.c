/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fork.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaefer <rafaefer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:16:53 by rafaefer          #+#    #+#             */
/*   Updated: 2024/12/10 11:38:35 by rafaefer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remakes.h"

pid_t	fork_r(void)
{
	pid_t	pid;

	pid = fork();
	if (pid < 0)
	{
		perror(RED"Fork FAIL"RST);
		exit(EX_OSERR);
	}
	return (pid);
}
