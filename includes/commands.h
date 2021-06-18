/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:42:42 by amarcell          #+#    #+#             */
/*   Updated: 2021/06/18 19:14:04 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMANDS_H
# define COMMANDS_H

# define COMMANDS	"clear,env,echo,exit,cd,pwd,export,unset"

# define ERROR				-1
# define MY_CLEAR			0
# define MY_ENV				1
# define MY_ECHO			2
# define MY_EXIT			3
# define MY_CD				4
# define MY_PWD				5
# define MY_EXPORT			6
# define MY_UNSET			7

/* SPECIAL */

# define SS_LEFT				"\e[D"
# define SS_RIGHT				"\e[C"
# define SS_UP					"\e[A"
# define SS_DOWN				"\e[B"

# define SHIFT_SS_LEFT			"\e[1;2D"
# define SHIFT_SS_RIGHT			"\e[1;2C"

# define SS_DEL					127
# define SS_TAB                 9

# define EXPORT_OP				"+="

# define WRITE					1
# define READ					0

/* FUNCTIONS */

int		error404(char *line, int pid);
void	quit(char *input, t_term *term);
int		export(char *input, int pid, t_term *term);
int		unset(char *input, int pid, char **env);
int		pwd(int pid, int fd[2]);
int		env(int pid, char **environ, int fd[2]);
int		cd(char *input, int pid);
int		clear_cmd(int pid);
int		exec_cmd(char *cmd, char *input, int pid, char **env);
int		cmd_id(char *cmd);

#endif
