/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:41:21 by seokchoi          #+#    #+#             */
/*   Updated: 2022/03/31 17:13:11 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	read_one_line_defore_newline(char *buf)
{
	
}

char	*get_next_line(int fd)
{
	char	*buf[BUFFER_SIZE + 1];
	char	*line;
	ssize_t	rdsize;

	if (BUFFER_SIZE < 1 || fd < 0 || fd > OPEN_MAX)
		return (0);
	buf = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	if (!buf)
		return (0);
	rdsize = read(fd, buf, O_RDONLY);
	while (rdsize > 0)
	{
		rdsize = read(fd, buf)
	}
	return ();
}

int	main(void)
{
	int	fd;

	fd = open("./example/test1");
	close(fd);
	return (0);
}
