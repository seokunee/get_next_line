/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:41:21 by seokchoi          #+#    #+#             */
/*   Updated: 2022/04/04 23:49:28 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_ckeck_newline(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_find_line(char *buf, ssize_t rdsize)
{
	ssize_t	i;
	ssize_t	

	i = 0;

	while ()
}


char	*get_next_line(int fd)
{
	char	*buf[BUFFER_SIZE + 1];
	char	*strs[OPEN_MAX];
	char	*tmp;
	ssize_t	rdsize;

	if (BUFFER_SIZE < 1 || fd < 0 || fd > OPEN_MAX)
		return (0);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (0);
	rdsize = read(fd, buf, O_RDONLY);
	while (rdsize > 0)
	{
		buf[rdsize] = '\0';
		if (!strs[fd])
			strs[fd] = ft_strdup("");
		if (!strs[fd])
			return (0);
		tmp = strs[fd];
		strs[fd] = ft_strjoin(tmp, buf);
		free(tmp);
		if (!str[fd])
			return (0);
		if (ft_ckeck_newline(strs[fd]) >= 0)
			break;
		rdsize = read(fd, buf, BUFFER_SIZE);
	}
	return (ft_find_line(&line[fd], rdsize));
}

int	main(void)
{
	int	fd;

	fd = open("./example/test1");
	close(fd);
	return (0);
}
