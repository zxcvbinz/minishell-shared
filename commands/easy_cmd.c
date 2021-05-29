/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:42:06 by amarcell          #+#    #+#             */
/*   Updated: 2021/05/29 17:38:03 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	error404(char *line)
{
	char	**split;

	split = ft_split(line, ' ');
	if (split[0])
		printf("command not found: %s\n", split[0]);
	free_table(split);
}

// some eventual free

void	quit(void)
{
	exit(0);
}
