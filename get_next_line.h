/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 14:50:51 by vduriez           #+#    #+#             */
/*   Updated: 2021/09/18 21:25:44 by vduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <limits.h>

typedef struct s_read
{
	int				index;
	int				check;
	int				read_ret;
	char			*reading;
	char			*line;
}					t_read;

char		*get_next_line(int fd);
char		*ft_strjoin(char *s1, char *s2);
int			ft_strlen(char *s);
char		*ft_strdup(const char *s);
char		*ft_free(char *s);

#endif
