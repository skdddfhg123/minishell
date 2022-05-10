/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idongmin <idongmin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:09:21 by idongmin          #+#    #+#             */
/*   Updated: 2022/05/10 02:20:41 by idongmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <dirent.h> // opendir //closedir //readdir
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <termios.h>
# include <unistd.h>
# include <signal.h>

typedef struct s_here
{
	char			*cmd;
	int				num;
	int				pipes[2];
	struct s_here	*previous;
	struct s_here	*next;
}					t_here;

#endif