/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 22:47:02 by auguitar          #+#    #+#             */
/*   Updated: 2019/02/11 23:51:09 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H
# define _GET_NEXT_LINE_H
# include "libft/libft.h"
# include <limits.h>
# include <unistd.h>
# define BUFF_SIZE 128

int get_next_line(const int fd, char **line);

#endif
