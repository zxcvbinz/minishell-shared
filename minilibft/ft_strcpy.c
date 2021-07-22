/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:07:33 by amarcell          #+#    #+#             */
/*   Updated: 2021/07/21 20:07:28 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	//printf("cpy src: %s\n", src);
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		//printf("dest[%ld]: %c  ===  src[%ld] %c\n", i, dest[i], i, src[i]);
		i++;
	}
	if (size)
		dest[i] = '\0';
	return (ft_strlen(dest));
}
