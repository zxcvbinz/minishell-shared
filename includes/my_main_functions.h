/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_main_functions.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:54:25 by dlanotte          #+#    #+#             */
/*   Updated: 2021/06/28 16:25:47 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_MAIN_FUNCTIONS_H
# define MY_MAIN_FUNCTIONS_H

# define PATH_MAX	4096 
# define RED_WRITE	1
# define RED_READ	2
# define RED_STDIN	0
# define RED_APPEND	3
# include "struct.h"


void	init(t_term *term, char **env);
int		find_command(t_term *term);
void	ft_signal_manager(void);
void	my_clear_screen(void);
int		ft_parsing_hub(t_term *term);
void	ft_execute_commands(t_clist *queque, t_term *term, int pid, int red);
void	exec_manager(t_clist *queque, t_term *term);
t_op	*get_op(t_clist *cls);
char	*ft_translate(char *input, t_term *term);
char	*ft_dollar(char **input, t_term *term, char **trans, int *iter);
char	*double_quotes(int *iter, char *input);
void	free_op(void *op);

void	find_cmd(t_term *term, int *iter, t_op **new);
void	find_cmd_input(t_term *term, int *iter, t_op **new);
void	find_red(t_term *term, int *iter, t_op **new);
char	**arg_matrix(char *input, t_term *term);
int		redirection(t_op *op, char **fd_error, int pid);
#endif
